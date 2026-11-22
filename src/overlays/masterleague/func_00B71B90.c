/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00B71B90(u8 selector, u8 *first, u8 *second, u8 *third) {
    u8 firstValue;
    u8 secondValue;
    u8 thirdValue;

    firstValue = 0xff;
    secondValue = 0xff;
    thirdValue = 0xff;
    switch (selector) {
    case 0:
        firstValue = 4;
        secondValue = 0xc;
        thirdValue = 4;
        break;
    case 1:
        firstValue = 0;
        secondValue = 8;
        thirdValue = 0;
        break;
    case 2:
        firstValue = 1;
        secondValue = 9;
        thirdValue = 1;
        break;
    case 3:
        firstValue = 2;
        secondValue = 10;
        thirdValue = 2;
        break;
    case 4:
        firstValue = 3;
        secondValue = 0xb;
        thirdValue = 3;
        break;
    case 5:
        firstValue = 5;
        secondValue = 0xd;
        break;
    case 6:
        firstValue = 5;
        secondValue = 6;
        thirdValue = 5;
        break;
    case 7:
        firstValue = 9;
        secondValue = 7;
        thirdValue = 6;
        break;
    case 8:
        firstValue = 6;
        secondValue = 0xe;
    }
    if (first != 0) {
        *first = firstValue;
    }
    if (second != 0) {
        *second = secondValue;
    }
    if (third != 0) {
        *third = thirdValue;
    }
}
