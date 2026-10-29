/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6MatchPlayer_GetSquadIndex(s32);

s32 func_003260A0(s32 arg0, s32 arg1) {
    s32 idx;

    idx = Pes6MatchPlayer_GetSquadIndex(arg1 & 0xFF);
    return M2C_FIELD(((idx << 2) + arg0), s32 *, 0x48) == 3;
}
