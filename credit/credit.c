#include <stdio.h>
#include <cs50.h>

int main() {
    long int cardNumber = get_long("Number: ");
    int cksum1 = 0;
    int cksum2 = 0;
    int temp = 0;
    long int multiplier = 1;
    printf("%li\n", cardNumber);
    for(int i = 0; i < 8; i++) { // Picks numbers skiping a decimal place
        temp = cardNumber%(100*multiplier)/(10*multiplier);
        if(temp >= 10) {
            temp = temp%10 + 1;
        }
        cksum1 += temp;
        multiplier *= 100;
    }
    printf("%i\n", cksum1);
    return 0;
}
