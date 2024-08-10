#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    printf("%li\n", cardNumber);
    for(i = 1; i < 9; i++) {
    }
    printf("%li\n", cardNumber%100/10);
    return 0;
}
