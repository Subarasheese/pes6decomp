/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_rating.h"

extern void func_00289D30(Pes6PlayerRating *, u8);
extern void func_00289040(Pes6PlayerRating *, s32);
extern void func_002889E0(Pes6PlayerRating *);

void func_002886B0(Pes6PlayerRating *ratings, u8 condition, s32 level, s32 fixedPenalty,
                   s32 weightedPenalty, s32 maximize) {
    u8 weight;
    if (weightedPenalty != 0) {
        ratings[0x05].value -= (u8)(ratings[0x05].value * 60 / 1000);
        if (ratings[0x1A].value >= 50) {
            weight = 100 - (ratings[0x1A].value - 50) * 2;
        } else {
            weight = 100;
        }
        ratings[0x0C].value -= (u8)(ratings[0x0C].value * 96 * weight / 100000);
        ratings[0x0E].value -= (u8)(ratings[0x0E].value * 96 * weight / 100000);
        ratings[0x10].value -= (u8)(ratings[0x10].value * 96 * weight / 100000);
        ratings[0x12].value -= (u8)(ratings[0x12].value * 96 * weight / 100000);
        ratings[0x15].value -= (u8)(ratings[0x15].value * 96 * weight / 100000);
        ratings[0x18].value -= (u8)(ratings[0x18].value * 120 * weight / 100000);
        ratings[0x13].value -= (u8)(ratings[0x13].value * 120 * weight / 100000);
    }
    if (level > 0) {
        func_00289040(ratings, level);
    }
    if (fixedPenalty) {
        func_002889E0(ratings);
    }
    func_00289D30(ratings, condition);
    if (maximize) {
        ratings[0x1A].value = 99;
        ratings[0x19].value = 99;
    }
}
