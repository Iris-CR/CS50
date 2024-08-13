#include "helpers.h"
#include "math.h"

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

            image[y][x].rgbtBlue = round(av);
            image[y][x].rgbtGreen = round(av);
            image[y][x].rgbtRed = round(av);
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    float sepiaRed, sepiaGreen, sepiaBlue;
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            sepiaRed = .393 * image[y][x].rgbtRed + .769 * image[y][x].rgbtGreen + .189 * image[y][x].rgbtBlue ;
            sepiaGreen = .349 * image[y][x].rgbtRed + .686 * image[y][x].rgbtGreen + .168 * image[y][x].rgbtBlue ;
            sepiaBlue = .272 * image[y][x].rgbtRed + .534 * image[y][x].rgbtGreen + .131 * image[y][x].rgbtBlue ;

        }
    }
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
