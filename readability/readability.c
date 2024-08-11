#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    string text = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sent = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        if(isalpha(text[i])) {
            letters++;
        } else if(text[i] == ' ') {
            words++;
        } else sent++;
    }
    return 0;
}
