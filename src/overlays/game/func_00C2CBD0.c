/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 *func_002C7D80(s32 side), *func_002CA180(s32 side);
extern s32 func_00C2CAC0(u8 *, u8 *, s32, s32 *score);
s32 func_00C2CBD0(s32 side, s32 filter) {
    s32 score;
    u8 *squad = func_002C7D80(side);
    return func_00C2CAC0(squad, func_002CA180(side), filter, &score);
}
