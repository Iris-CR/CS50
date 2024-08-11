#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    string text = get_string("Text: ");
    int letters = 0;
    int words = 0;
    int sent = 0;
    float CLI = 0;
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
    CLI = 0.0588 * ((letters/words) * 100.0) - 0.296 * ((sent/words) * 100.0) - 15.8;
    if (CLI < 1) {
        printf("Before Grade 1\n");
    } else if (CLI > 16) {
        printf("Grade 16+\n");
    } else printf("Grade %f\n", CLI);
    return 0;
}
