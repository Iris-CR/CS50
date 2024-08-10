#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    printf("%li", cardNumber);
    return 0;
}
