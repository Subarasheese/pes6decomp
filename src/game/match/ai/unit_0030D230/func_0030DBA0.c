/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchClock_Remaining[];
extern char Pes6MatchClock_Extra[];
extern char D_00591F12[];
extern char D_00591F24[];

u8 func_0030DBA0(void) {
    u8 var_v0;

    var_v0 = (*(u8 *)D_00591F12);
    if ((var_v0 == 0) && ((*(s32 *)Pes6MatchClock_Remaining) == 0) && ((*(s16 *)Pes6MatchClock_Extra) == 0) && ((*(u8 *)D_00591F24) == 0)) {
        return 1;
    }
    return var_v0;
}
