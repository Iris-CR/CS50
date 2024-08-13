#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float av = 0;
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            av += image[y][x].rgbtBlue;
            av += image[y][x].rgbtGreen;
            av += image[y][x].rgbtRed;
            av /= 3.0;

            image[y][x].rgbtBlue = av;
            image[y][x].rgbtGreen = av;
            image[y][x].rgbtRed = av;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
