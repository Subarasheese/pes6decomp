/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];

s32 func_0080B6C0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) || (M2C_FIELD(arg0, f32 *, 0x54) != 0.0f)) {
        var_v0 = 1;
    }
    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) <= -7241.0f) && ((*(u8 *)D_00591E19) == 1)) {
        var_v0 = 1;
    }
    return var_v0;
}
