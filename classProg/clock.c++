#include <iostream>
#include <thread>
#include <ctime>
#include <cmath>
#include <chrono>

using namespace std;

const int crad = 10;
const int center_x = 12;
const int center_y = 12;

void draw(int h, int m, int s) {
    char clock[25][25] = {};

    for (int i = 0; i < 25; ++i) {
        for (int j = 0; j < 25; ++j) {
            clock[i][j] = ' ';
        }
    }

    // Adjust the y-coordinates by a factor to account for the aspect ratio
    const double aspect_ratio = 2.0;

    for (int i = 0; i < 12; ++i) {
        int x = center_x + (int)(crad * cos((i * 30 - 90) * M_PI / 180));
        int y = center_y + (int)(crad * sin((i * 30 - 90) * M_PI / 180) / aspect_ratio);
        clock[y][x] = 'o';
    }
    
    clock[center_y][center_x] = 'o';

    int hX = center_x + (int)((crad - 4) * cos((h * 30 + m * 0.5 - 90) * M_PI / 180));
    int hY = center_y + (int)((crad - 4) * sin((h * 30 + m * 0.5 - 90) * M_PI / 180) / aspect_ratio);
    clock[hY][hX] = 'H';

    int mX = center_x + (int)((crad - 2) * cos((m * 6 - 90) * M_PI / 180));
    int mY = center_y + (int)((crad - 2) * sin((m * 6 - 90) * M_PI / 180) / aspect_ratio);
    clock[mY][mX] = 'M';

    int sX = center_x + (int)(crad * cos((s * 6 - 90) * M_PI / 180));
    int sY = center_y + (int)(crad * sin((s * 6 - 90) * M_PI / 180) / aspect_ratio);
    clock[sY][sX] = 'S';

    for (int i = 0; i < 25; ++i) {
        for (int j = 0; j < 25; ++j) {
            cout << clock[i][j];
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        int h = ltm->tm_hour % 12;
        int m = ltm->tm_min;
        int s = ltm->tm_sec;

        system("CLS");

        draw(h, m, s);

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}