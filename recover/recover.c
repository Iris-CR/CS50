#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        return 1;
    }
    char *s = argv[1];
    FILE *f = fopen(s, "r");
}
