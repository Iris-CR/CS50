#include <stdio.h>
#include <cs50.h>

int main() {
    int height;
    do {
        height = get_int("Height: ");
    } while(height < 1 || height > 8);
    for(int i = 0; i < height; i++){
        for(int j = 0; j < height-1; j++) {
            printf(" ");
        }
        for(int k = 0; k <= i; k++) {
            printf("#");
        }
    }
    return 0;
}
