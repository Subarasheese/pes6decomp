/* compiler: mwcc-3.0.1b210 */
#include "pes6/lineup_teamwork.h"
u8 func_0024E920(s32 first, const Pes6TeamworkParams *a, s32 second, const Pes6TeamworkParams *b) {
    u8 score;
    if ((u16)first == (u16)second)
        return 0;
    if ((u16)first == 0)
        return 0;
    if ((u16)second == 0)
        return 0;
    if (!a)
        return 0;
    if (!b)
        return 0;
    score = (a->teamwork + b->teamwork) / 2;
    if (a->nationality == b->nationality)
        score = score * 105 / 100;
    if (score > 99)
        score = 99;
    return score;
}
