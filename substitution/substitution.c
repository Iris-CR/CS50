#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    char letters[26][26] = {{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
    {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}};
    string plainTxt;
    string cipherTxt;

    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    } else {
        for(int i = 0; argv[1][i] != '\0'; i++) {
            if(letters[i][1] != '0') {
                printf("%c\n", letters[i][1]);
                return 1;
            } else {
                printf("%c\n", argv[1][i]);
                letters[i][1] = argv[1][i];
            }
        }
    }

    plainTxt = get_string("plaintext:  ");
    cipherTxt = plainTxt;
    for(int i = 0; plainTxt[i] != '\0'; i++) {
        if(isalpha(plainTxt[i])) {
            if(isupper(plainTxt[i])) {
                cipherTxt[i] = toupper(argv[1][plainTxt[i]-65]);
            } else cipherTxt[i] = tolower(argv[1][plainTxt[i]-97]);
        } else cipherTxt[i] = plainTxt[i];
    }
    printf("ciphertext: %s\n", cipherTxt);
    return 0;
}
