/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_009A00D0(u8, s32);
extern u8 Pes6MatchContext_Half[];
extern s32 Pes6MatchClock_Remaining[];
extern u8 D_00591EF6[];
extern u8 D_00591EF7[];
extern u8 D_00591EFC[];
extern u8 D_00591F24[];

s32 func_009A04F0(void) {
    if (D_00591F24[0] == 7 && func_009A00D0(Pes6MatchContext_Half[0], Pes6MatchClock_Remaining[0]) == 0) {
        return 0;
    }
    return D_00591EF6[0] != 0 || D_00591EF7[0] != 0 || D_00591EFC[0] != 0;
}
