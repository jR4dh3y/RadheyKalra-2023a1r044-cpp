import sys
import os
import re
from yt_dlp import YoutubeDL

def print_usage():
    print("Usage: python ytdl.py [YouTube_URL] [-o | -v]")
    print("  -o : Download audio only")
    print("  -v : Download video + audio")

def sanitize_filename(filename):
    # Replace characters not allowed in Windows filenames
    return re.sub(r'[\\/*?:"<>|]', '_', filename)

def main():
    if len(sys.argv) != 3:
        print_usage()
        return

    url = sys.argv[1]
    option = sys.argv[2]    
    # Create downloads directory if it doesn't exist
    downloads_dir = os.path.join(os.path.dirname(os.path.abspath(__file__)), "downloads")
    if not os.path.exists(downloads_dir):
        os.makedirs(downloads_dir)
    
    output_template = os.path.join(downloads_dir, '%(title)s.%(ext)s')

    if option == "-o":
        ydl_opts = {
            'format': 'bestaudio/best',
            'outtmpl': output_template,
            'postprocessors': [{
                'key': 'FFmpegExtractAudio',
                'preferredcodec': 'mp3',
                'preferredquality': '192',
            }],
            # Sanitize filenames
            'restrictfilenames': True,
            'windowsfilenames': True,
        }
    elif option == "-v":
        ydl_opts = {
            'format': 'bestvideo+bestaudio/best',
            'outtmpl': output_template,
            'merge_output_format': 'mp4',
            # Sanitize filenames
            'restrictfilenames': True,
            'windowsfilenames': True,
        }
    else:
        print("Invalid option.")
        print_usage()
        return

    try:
        with YoutubeDL(ydl_opts) as ydl:
            ydl.download([url])
            print("Download complete!")
    except Exception as e:
        print(f"Error occurred: {e}")

if __name__ == "__main__":
    main()