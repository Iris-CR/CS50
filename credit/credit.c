#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    int temp = 0;
    int cardT = 0; // 1 - Visa | 2 - MasterCard | 3 - AMEX
    long int multiplier = 1;
    printf("%li\n", cardNumber);
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place
        temp = cardNumber%(100*multiplier)/(10*multiplier)*2;
        if(temp >= 10) {
            temp = temp%10 + 1;
        }
        cksum1 += temp;
        multiplier *= 100;
    }
    multiplier = 1;
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place starting with the last
        cksum2 += cardNumber%(10*multiplier)/(1*multiplier);
        multiplier *= 100;
    }
    if(cardNumber%(100*10000000000000000)/(10*10000000000000000) == 4) {
        cardT = 1;
    } else if(cardNumber%(100*10000000000000000)/(10*10000000000000000) == 5 && (cardNumber%(10*10000000000000000)/(1*10000000000000000) > 0) && (cardNumber%(10*10000000000000000)/(1*10000000000000000) > 0))
    if((cksum1 + cksum2) % 10 == 0) {

    }
    return 0;
}

int getDigitEODSL() { // Every Other Digit Starting from Last

}
