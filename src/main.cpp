#include "../include/image.h"

int main() {

    const int width = 640;
    const int height = 480;

    Image image(width, height);

    for(int y = 0; y < height; ++y) {
        for(int x = 0; x < width; ++x) {
            image.SetColor(Color((float)x / (float)width, 1.0f - ((float)x / (float)width), (float)y/(float)height), x, y);
        }
    }

    image.Export("image.bmp");

    Image copy(0, 0);
    copy.Read("image.bmp");
    copy.Export("copy.bmp");

    return 0;
}