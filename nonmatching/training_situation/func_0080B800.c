/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchState_Current[];
extern char D_00591E4C[];
extern char D_00592810[];

s32 func_0080B800(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) || (M2C_FIELD(arg0, f32 *, 0x4C) != 0.0f)) {
        var_v0 = 1;
    }
    if (((*(u8 *)Pes6MatchState_Current) == (*(u8 *)D_00592810)) || ((*(u8 *)D_00591E4C) == (*(u8 *)D_00592810))) {
        var_v0 = 1;
    }
    return var_v0;
}
