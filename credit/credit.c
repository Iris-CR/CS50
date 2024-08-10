#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    printf("%li\n", cardNumber);
    printf("%li\n", cardNumber%100/10);
    return 0;
}
