import cs50

def main():
    card_num = cs50.get_int("Number: ")
    chk_sum1 = 0
    chk_sum2 = 0
    card_t = 0
    mult = 1
    for i in range(0, 8):
        chk_sum1 += getDigitEODSL(card_num, mult)
        mult *= 100
    mult = 1
    for i in range(0, 8):
        chk_sum2 += getDigitEODL(card_num, mult)
        mult *= 100
    mult /= 100
    if getDigitEODSLRaw(card_num, mult) == 4 or getDigitEODL(card_num, mult / 100) == 4:
        card_t = 1
    elif getDigitEODSLRaw(card_num, mult) == 5 and getDigitEODL(card_num, mult) > 0 and getDigitEODL(card_num, mult) < 6:
        card_t = 2
    elif getDigitEODSLRaw(card_num, mult) == 0 and getDigitEODL(card_num, mult) == 3 and (getDigitEODSLRaw(card_num, mult / 100) == 4 or getDigitEODSLRaw(card_num, mult / 100) == 7)


def getDigitEODSL(card, multp):
    temp = card % (100 * multp) / (10 * multp) *2
    if temp >= 10:
        temp = temp % 10 + 1
    return temp


def getDigitEODSLRaw(card, multp):
    return card % (100 * multp) / (10 * mult)


def getDigitEODL(card, multp):
    return card % (10 * multp) / mult


main()
