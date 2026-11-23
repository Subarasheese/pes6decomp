/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
extern u8 D_005926FD[], D_005926FE[], D_00CBCC62[], D_00CBD269[];
extern s32 func_00BC2B50(Pes6MatchPlayer *, s32, s32), Pes6MatchFlow_GetState(s32);
s32 func_00A07B40(void) {
    if (D_005926FD[0] == 1) {
        if (!D_00CBCC62[0] && D_005926FE[0] == 5 &&
            func_00BC2B50(Pes6MatchPlayer_Get(D_00CBD269[0]), 2, 0))
            return 1;
        return 0;
    }
    return (u8)Pes6MatchFlow_GetState(1) != 5;
}
