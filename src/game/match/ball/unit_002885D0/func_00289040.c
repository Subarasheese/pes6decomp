/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_rating.h"

void func_00289040(Pes6PlayerRating *ratings, s32 level) {
    switch (level) {
    case 1:
        ratings[0x02].value -= (u8)(ratings[0x02].value * 32 / 200);
        ratings[0x03].value -= (u8)(ratings[0x03].value * 32 / 200);
        ratings[0x04].value -= (u8)(ratings[0x04].value * 18 / 200);
        ratings[0x05].value -= (u8)(ratings[0x05].value * 24 / 200);
        ratings[0x06].value -= (u8)(ratings[0x06].value * 24 / 200);
        ratings[0x07].value -= (u8)(ratings[0x07].value * 24 / 200);
        ratings[0x08].value -= (u8)(ratings[0x08].value * 24 / 200);
        ratings[0x09].value -= (u8)(ratings[0x09].value * 24 / 200);
        ratings[0x0A].value -= (u8)(ratings[0x0A].value * 24 / 200);
        ratings[0x0B].value -= (u8)(ratings[0x0B].value * 24 / 200);
        ratings[0x0C].value -= (u8)(ratings[0x0C].value * 18 / 200);
        ratings[0x0D].value -= (u8)(ratings[0x0D].value * 18 / 200);
        ratings[0x0E].value -= (u8)(ratings[0x0E].value * 18 / 200);
        ratings[0x0F].value -= (u8)(ratings[0x0F].value * 18 / 200);
        ratings[0x10].value -= (u8)(ratings[0x10].value * 18 / 200);
        ratings[0x11].value -= (u8)(ratings[0x11].value * 18 / 200);
        ratings[0x12].value -= (u8)(ratings[0x12].value * 18 / 200);
        ratings[0x15].value -= (u8)(ratings[0x15].value * 18 / 200);
        ratings[0x16].value -= (u8)(ratings[0x16].value * 24 / 200);
        ratings[0x18].value -= (u8)(ratings[0x18].value * 18 / 200);
        ratings[0x14].value -= (u8)(ratings[0x14].value * 18 / 200);
        ratings[0x19].value -= (u8)(ratings[0x19].value * 30 / 200);
        ratings[0x1A].value -= (u8)(ratings[0x1A].value * 30 / 200);
        ratings[0x13].value -= (u8)(ratings[0x13].value * 18 / 200);
        break;
    case 2:
        ratings[0x02].value -= (u8)(ratings[0x02].value * 64 / 100);
        ratings[0x03].value -= (u8)(ratings[0x03].value * 64 / 100);
        ratings[0x04].value -= (u8)(ratings[0x04].value * 72 / 100);
        ratings[0x05].value -= (u8)(ratings[0x05].value * 72 / 100);
        ratings[0x06].value -= (u8)(ratings[0x06].value * 96 / 100);
        ratings[0x07].value -= (u8)(ratings[0x07].value * 96 / 100);
        ratings[0x08].value -= (u8)(ratings[0x08].value * 96 / 100);
        ratings[0x09].value -= (u8)(ratings[0x09].value * 96 / 100);
        ratings[0x0A].value -= (u8)(ratings[0x0A].value * 96 / 100);
        ratings[0x0B].value -= (u8)(ratings[0x0B].value * 96 / 100);
        ratings[0x0C].value -= (u8)(ratings[0x0C].value * 72 / 100);
        ratings[0x0D].value -= (u8)(ratings[0x0D].value * 72 / 100);
        ratings[0x0E].value -= (u8)(ratings[0x0E].value * 72 / 100);
        ratings[0x0F].value -= (u8)(ratings[0x0F].value * 72 / 100);
        ratings[0x10].value -= (u8)(ratings[0x10].value * 72 / 100);
        ratings[0x11].value -= (u8)(ratings[0x11].value * 72 / 100);
        ratings[0x12].value -= (u8)(ratings[0x12].value * 72 / 100);
        ratings[0x15].value -= (u8)(ratings[0x15].value * 72 / 100);
        ratings[0x16].value -= (u8)(ratings[0x16].value * 96 / 100);
        ratings[0x18].value -= (u8)(ratings[0x18].value * 72 / 100);
        ratings[0x14].value -= (u8)(ratings[0x14].value * 72 / 100);
        ratings[0x19].value -= (u8)(ratings[0x19].value * 90 / 100);
        ratings[0x1A].value -= (u8)(ratings[0x1A].value * 90 / 100);
        ratings[0x13].value -= (u8)(ratings[0x13].value * 72 / 100);
        break;
    }
}
