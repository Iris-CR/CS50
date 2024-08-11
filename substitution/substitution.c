#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    
    string plainTxt;
    string cipherTxt;
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if(strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    } else {

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
    }
    return 0;
}
