#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    string plainTxt;
    string cypherTxt;
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    } else {
        plainTxt = get_string("plaintext:  ");
        for(int i = 0; plainTxt[i] != '\0'; i++) {
            if(isalpha(plainTxt[i])) {
                
            }
        }
        printf("cyphertext: %s\n", cypherTxt);
    }
    return 0;
}
