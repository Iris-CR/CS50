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
    BYTE buffer;
    while (fread(&buffer, sizeof(BYTE)*512, 1, infile))
    {

    }
}
