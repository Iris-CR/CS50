#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    string plainTxt;
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    } else {
        plainTxt = get_string("plaintext:  ");
        printf("cyphertext: %s\n", plainTxt);
    }
    return 0;
}
