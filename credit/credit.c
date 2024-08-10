#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    int multiplier = 1;
    printf("%li\n", cardNumber);
    for(int i = 0; i < 8; i++) {

        printf("%li\n", cardNumber%(100*multiplier)/(10*multiplier));
        multiplier *= 100;
    }
    printf("%li\n", cardNumber%100/10);
    printf("%li\n", cardNumber%10000/1000);
    printf("%li\n", cardNumber%1000000/100000);
    printf("%li\n", cardNumber%100000000/10000000);
    printf("%li\n", cardNumber%10000000000/1000000000);
    printf("%li\n", cardNumber%1000000000000/100000000000);
    printf("%li\n", cardNumber%100000000000000/10000000000000);
    printf("%li\n", cardNumber%10000000000000000/1000000000000000);
    return 0;
}
