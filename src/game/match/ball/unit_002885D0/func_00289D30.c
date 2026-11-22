/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_rating.h"

#define ADJUST(i, op, rate) ratings[i].value op(u8)(ratings[i].value * (rate) / 1000)
#define LIMIT(i)                                                                                   \
    if (ratings[i].value > 99) {                                                                   \
        ratings[i].value = 99;                                                                     \
    }

void func_00289D30(Pes6PlayerRating *ratings, u8 condition) {
    switch (condition) {
    case 0:
        ADJUST(0x02, +=, 120);
        ADJUST(0x03, +=, 120);
        ADJUST(0x1B, +=, 120);
        ADJUST(0x04, +=, 60);
        ADJUST(0x05, +=, 120);
        ADJUST(0x06, +=, 90);
        ADJUST(0x07, +=, 120);
        ADJUST(0x08, +=, 120);
        ADJUST(0x09, +=, 120);
        ADJUST(0x0A, +=, 90);
        ADJUST(0x0B, +=, 90);
        ADJUST(0x0C, +=, 90);
        ADJUST(0x0D, +=, 60);
        ADJUST(0x0E, +=, 90);
        ADJUST(0x0F, +=, 60);
        ADJUST(0x10, +=, 90);
        ADJUST(0x11, +=, 120);
        ADJUST(0x12, +=, 90);
        ADJUST(0x15, +=, 90);
        ADJUST(0x16, +=, 120);
        ADJUST(0x18, +=, 90);
        ADJUST(0x14, +=, 90);
        ADJUST(0x19, +=, 90);
        ADJUST(0x1A, +=, 120);
        ADJUST(0x13, +=, 90);
        break;
    case 1:
        ADJUST(0x02, +=, 64);
        ADJUST(0x03, +=, 64);
        ADJUST(0x1B, +=, 64);
        ADJUST(0x04, +=, 30);
        ADJUST(0x05, +=, 60);
        ADJUST(0x06, +=, 48);
        ADJUST(0x07, +=, 60);
        ADJUST(0x08, +=, 60);
        ADJUST(0x09, +=, 60);
        ADJUST(0x0A, +=, 48);
        ADJUST(0x0B, +=, 48);
        ADJUST(0x0C, +=, 48);
        ADJUST(0x0D, +=, 30);
        ADJUST(0x0E, +=, 48);
        ADJUST(0x0F, +=, 30);
        ADJUST(0x10, +=, 48);
        ADJUST(0x11, +=, 60);
        ADJUST(0x12, +=, 48);
        ADJUST(0x15, +=, 48);
        ADJUST(0x16, +=, 60);
        ADJUST(0x18, +=, 48);
        ADJUST(0x14, +=, 48);
        ADJUST(0x19, +=, 48);
        ADJUST(0x1A, +=, 60);
        ADJUST(0x13, +=, 48);
        break;
    case 2:
        break;
    case 3:
        ADJUST(0x02, -=, 80);
        ADJUST(0x03, -=, 80);
        ADJUST(0x1B, -=, 80);
        ADJUST(0x04, -=, 60);
        ADJUST(0x05, -=, 60);
        ADJUST(0x06, -=, 60);
        ADJUST(0x07, -=, 90);
        ADJUST(0x08, -=, 90);
        ADJUST(0x09, -=, 90);
        ADJUST(0x0A, -=, 48);
        ADJUST(0x0B, -=, 60);
        ADJUST(0x0C, -=, 48);
        ADJUST(0x0D, -=, 30);
        ADJUST(0x0E, -=, 48);
        ADJUST(0x0F, -=, 30);
        ADJUST(0x10, -=, 48);
        ADJUST(0x11, -=, 60);
        ADJUST(0x12, -=, 48);
        ADJUST(0x15, -=, 48);
        ADJUST(0x16, -=, 60);
        ADJUST(0x18, -=, 60);
        ADJUST(0x14, -=, 60);
        ADJUST(0x19, -=, 60);
        ADJUST(0x1A, -=, 90);
        ADJUST(0x13, -=, 60);
        break;
    case 4:
        ADJUST(0x02, -=, 160);
        ADJUST(0x03, -=, 160);
        ADJUST(0x1B, -=, 160);
        ADJUST(0x04, -=, 120);
        ADJUST(0x05, -=, 120);
        ADJUST(0x06, -=, 120);
        ADJUST(0x07, -=, 180);
        ADJUST(0x08, -=, 180);
        ADJUST(0x09, -=, 180);
        ADJUST(0x0A, -=, 90);
        ADJUST(0x0B, -=, 120);
        ADJUST(0x0C, -=, 90);
        ADJUST(0x0D, -=, 60);
        ADJUST(0x0E, -=, 90);
        ADJUST(0x0F, -=, 60);
        ADJUST(0x10, -=, 90);
        ADJUST(0x11, -=, 120);
        ADJUST(0x12, -=, 90);
        ADJUST(0x15, -=, 90);
        ADJUST(0x16, -=, 120);
        ADJUST(0x18, -=, 120);
        ADJUST(0x14, -=, 120);
        ADJUST(0x19, -=, 120);
        ADJUST(0x1A, -=, 180);
        ADJUST(0x13, -=, 120);
        break;
    }
    switch (condition) {
    case 0:
    case 1:
        LIMIT(0x02);
        LIMIT(0x03);
        LIMIT(0x04);
        LIMIT(0x05);
        LIMIT(0x06);
        LIMIT(0x07);
        LIMIT(0x08);
        LIMIT(0x09);
        LIMIT(0x0A);
        LIMIT(0x0B);
        LIMIT(0x0C);
        LIMIT(0x0D);
        LIMIT(0x0E);
        LIMIT(0x0F);
        LIMIT(0x10);
        LIMIT(0x11);
        LIMIT(0x12);
        LIMIT(0x15);
        LIMIT(0x16);
        LIMIT(0x18);
        LIMIT(0x14);
        LIMIT(0x19);
        LIMIT(0x1A);
        LIMIT(0x13);
        break;
    }
}
