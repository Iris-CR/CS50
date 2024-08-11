#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    string pl1 = get_string("Player 1: ");
    string pl2 = get_string("Player 2: ");
    pl1 = toupper(pl1);
    pl2 = toupper(pl2);
    printf("%s\n", pl1);
    printf("%s\n", pl2);
    return 0;
}
