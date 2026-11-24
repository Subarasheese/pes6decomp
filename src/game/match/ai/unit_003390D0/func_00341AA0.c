/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_period_message.h"

extern s32 func_003119B0(u8 *firstPlayer, s32 side);
extern s32 func_00311BA0(s32 player);

s32 func_00341AA0(s32 *playerCount, s32 side) {
    u8 firstPlayer;
    s32 i;
    s32 count;

    func_003119B0(&firstPlayer, side);
    i = 0;
    count = 0;
    do {
        if (func_00311BA0(firstPlayer + i) != 0) {
            count += 1;
        }
        i += 1;
    } while (i < 11);
    *playerCount = count;
    return 1;
}
