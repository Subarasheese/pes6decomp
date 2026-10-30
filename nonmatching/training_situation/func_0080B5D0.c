/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];

s32 func_0080B5D0(void *arg0) {
    s32 temp_a1;
    s32 var_v0;
    u16 temp_a1_2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_v0 = 0;
    if (((*(u8 *)D_00591E4C) == temp_a1) || (((*(u8 *)D_00591E19) == temp_a1) && ((temp_a1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_a1_2 == 1)) || (temp_a1_2 == 2) || (temp_a1_2 == 4) || (temp_a1_2 == 8))) || (M2C_FIELD(arg0, f32 *, 0x5C) != 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
