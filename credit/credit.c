#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    int temp = 0;
    int digitCount = 0;
    long int multiplier = 1;
    printf("%li\n", cardNumber);
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place
        temp = cardNumber%(100*multiplier)/(10*multiplier)*2;
        if(temp >= 10) {
            temp = temp%10 + 1;
        }
        cksum1 += temp;
        multiplier *= 100;
        digitCount++;
    }
    multiplier = 1;
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place starting with the last
        cksum2 += cardNumber%(10*multiplier)/(1*multiplier);
        multiplier *= 100;
        digitCount++;
    }
    if((cksum1 + cksum2) % 10 == 0) {

    }
    return 0;
}
