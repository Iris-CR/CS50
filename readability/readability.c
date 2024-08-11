#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    string text = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sent = 0;
    int CLI = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        if(isalpha(text[i])) {
            letters++;
        } else if(text[i] == ' ') {
            words++;
        } else if(text[i] == '.' || text[i] == '!' || text[i] == '?') {
            words++;
            sent++;
        }
    }
    CLI = 0.0588 * letters/words * 100 - 0.296 * sent/words * 100 - 15.8;
    if (CLI < 1) {
        printf("Before Grade 1\n");
        return 0;
    }
    printf("Grade %i\n", CLI);
    return 0;
}
