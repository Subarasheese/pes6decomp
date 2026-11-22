/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_rating.h"

void func_002889E0(Pes6PlayerRating *ratings) {
    ratings[0x02].value -= (u8)(ratings[0x02].value * 64 / 1000);
    ratings[0x03].value -= (u8)(ratings[0x03].value * 64 / 1000);
    ratings[0x04].value -= (u8)(ratings[0x04].value * 60 / 1000);
    ratings[0x05].value -= (u8)(ratings[0x05].value * 60 / 1000);
    ratings[0x06].value -= (u8)(ratings[0x06].value * 48 / 1000);
    ratings[0x07].value -= (u8)(ratings[0x07].value * 60 / 1000);
    ratings[0x08].value -= (u8)(ratings[0x08].value * 60 / 1000);
    ratings[0x09].value -= (u8)(ratings[0x09].value * 60 / 1000);
    ratings[0x0A].value -= (u8)(ratings[0x0A].value * 48 / 1000);
    ratings[0x0B].value -= (u8)(ratings[0x0B].value * 48 / 1000);
    ratings[0x0C].value -= (u8)(ratings[0x0C].value * 48 / 1000);
    ratings[0x0D].value -= (u8)(ratings[0x0D].value * 30 / 1000);
    ratings[0x0E].value -= (u8)(ratings[0x0E].value * 48 / 1000);
    ratings[0x0F].value -= (u8)(ratings[0x0F].value * 30 / 1000);
    ratings[0x10].value -= (u8)(ratings[0x10].value * 48 / 1000);
    ratings[0x11].value -= (u8)(ratings[0x11].value * 60 / 1000);
    ratings[0x12].value -= (u8)(ratings[0x12].value * 48 / 1000);
    ratings[0x15].value -= (u8)(ratings[0x15].value * 48 / 1000);
    ratings[0x16].value -= (u8)(ratings[0x16].value * 60 / 1000);
    ratings[0x18].value -= (u8)(ratings[0x18].value * 48 / 1000);
    ratings[0x14].value -= (u8)(ratings[0x14].value * 48 / 1000);
    ratings[0x19].value -= (u8)(ratings[0x19].value * 48 / 1000);
    ratings[0x1A].value -= (u8)(ratings[0x1A].value * 60 / 1000);
    ratings[0x13].value -= (u8)(ratings[0x13].value * 48 / 1000);
}
