#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        return 1;
    }
    char *fileName = argv[1];
    FILE *infile = fopen(fileName, "rb");
    if (infile == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }
    BYTE buffer[512];
    int imgCount = 0;
    char *outName ;
    FILE *out = fopen()
    while (fread(&buffer, sizeof(buffer), 1, infile))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && buffer[3] >= 0xe0 && buffer[3] <= 0xef)
        {
            if (imgCount == 0)
            {
                fwrite(&buffer, sizeof(buffer), 1, out)
            }
        }
    }
}
