/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591C09[];
s32 Pes6MatchContext_GetFlagDB5(void);
s32 Pes6MatchContext_GetFlagDB7(void);
s32 func_00342050(void);
void func_003386B0(s32 (*)(void));

s32 func_00342090(void) {
    if (Pes6MatchContext_GetFlagDB5()) {
        if (Pes6MatchContext_GetFlagDB7() == 0 && D_00591C09[0] != 5) {
            func_003386B0(func_00342050);
            return 1;
        }
    }
    return 0;
}
