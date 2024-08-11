#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
    } else if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
    } else {
        printf("Correct\n");
    }
    return 0;
}
