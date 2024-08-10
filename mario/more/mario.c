#include <stdio.h>
#include <cs50.h>

int main() {
    int height;
    do {
        height = get_int()
    } while(height < 1 && height > 8)
    return 0;
}
