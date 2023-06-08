// C++ code that image as 1D array input and gives cropped image based on coordinates provided


#include <iostream>
#include <vector>

std::vector<int> cropImage(const std::vector<int>& image, int width, int height, int newWidth, int newHeight, int x, int y)
{
    std::vector<int> croppedImage;

    // Calculate the starting index for cropping
    int startIndex = y * width + x;

    // Iterate over the rows and columns of the crop region
    for (int row = 0; row < newHeight; ++row)
    {
        for (int col = 0; col < newWidth; ++col)
        {
            // Calculate the index of the pixel in the original image
            int index = startIndex + row * width + col;
            // Add the pixel to the cropped image
            croppedImage.push_back(image[index]);
        }
    }

    return croppedImage;
}

int main()
{
    std::vector<int> image = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int width = 4;
    int height = 4;
    int newWidth = 2;
    int newHeight = 2;
    int x = 1;
    int y = 1;

    std::vector<int> croppedImage = cropImage(image, width, height, newWidth, newHeight, x, y);

    // Print the cropped image
    for (int pixel : croppedImage)
    {
        std::cout << pixel << " ";
    }
    std::cout << std::endl;

    return 0;
}
