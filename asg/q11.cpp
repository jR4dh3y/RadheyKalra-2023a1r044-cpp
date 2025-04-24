#include <iostream>
#include <cstring>
using namespace std;

class ImageProcessing {
private:
    int width;
    int height;
    int* pixelData;

public:
    // Constructor
    ImageProcessing(int w, int h) : width(w), height(h) {
        pixelData = new int[width * height];
        for (int i = 0; i < width * height; ++i) {
            pixelData[i] = 0; 
        }
    }
    ImageProcessing(const ImageProcessing& other) : width(other.width), height(other.height) {
        pixelData = new int[width * height];
        memcpy(pixelData, other.pixelData, width * height * sizeof(int));
    }

    // Destructor
    ~ImageProcessing() {
        delete[] pixelData;
    }

    // Modify a pixel
    void setPixel(int x, int y, int value) {
        if (x >= 0 && x < width && y >= 0 && y < height) {
            pixelData[y * width + x] = value;
        }
    }

    // Print pixel data
    void printPixels() const {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cout << pixelData[i * width + j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ImageProcessing img1(3, 3);
    img1.setPixel(1, 1, 255);

    cout << "Original Image:" << endl;
    img1.printPixels();

    ImageProcessing img2 = img1; // Deep copy
    img2.setPixel(0, 0, 128);

    cout << "\nModified Copy:" << endl;
    img2.printPixels();

    cout << "\nOriginal Image After Modification of Copy:" << endl;
    img1.printPixels();

    return 0;
}