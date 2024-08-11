#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int plScore[2] = {0, 0};
    string pl1 = get_string("Player 1: ");
    string pl2 = get_string("Player 2: ");
    for(int i = 0, j = strlen(pl1); i < j; i++) {
        pl1[i] = toupper(pl1[i]);
        for(int k = 0; k < 26; k++) {
            if (pl1[i]-65 == scores[])
        }
    }
    for(int i = 0, j = strlen(pl2); i < j; i++) {
        pl2[i] = toupper(pl2[i]);
    }
    printf("%s\n", pl1);
    printf("%s\n", pl2);
    return 0;
}
