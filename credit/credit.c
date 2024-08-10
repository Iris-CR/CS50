#include <stdio.h>
#include <cs50.h>

int getDigitEODSL(long int mult)

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    int cardT = 0; // 1 - Visa | 2 - MasterCard | 3 - AMEX
    long int multiplier = 1;
    printf("%li\n", cardNumber);
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place
        cksum1 += getDigitEODSL(multiplier);
        multiplier *= 100;
    }
    multiplier = 1;
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place starting with the last
        cksum2 += getDigitEODL(multiplier);
        multiplier *= 100;
    }
    if(getDigitEODSL(multiplier) == 4) {
        cardT = 1;
    } else if(getDigitEODSL(multiplier) == 5 && getDigitEODL(multiplier) > 0 && getDigitEODL(multiplier) < 6) {
        cardT = 2;
    } else if(getDigitEODSL(multiplier) == 0 && getDigitEODL(multiplier) == 3 && (getDigitEODSL(multiplier/100) == 4 || getDigitEODSL(multiplier/100) == 7)) {
        cardT = 3;
    }
    if((cksum1 + cksum2) % 10 == 0) {

    }
    return 0;
}

int getDigitEODSL(long int mult) { // Every Other Digit Starting from Second to Last
    if(cardNumber%(100*mult)/(10*mult)*2 >= 10) {
        return (cardNumber%(100*mult)/(10*mult)*2)%10 + 1;
    }
    else
    return cardNumber%(100*mult)/(10*mult)*2;
}

int getDigitEODL(long int mult) { // Every Other Digit Starting from Last
    return cardNumber%(10*multiplier)/(1*multiplier);
}
