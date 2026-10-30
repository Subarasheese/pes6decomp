/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB9F0();                                /* extern */
f32 func_00BBCB90();                                /* extern */
s32 func_00BBCBC0();                                /* extern */
extern char D_00591BE4[];
extern char D_005E31C0[];
extern char D_005E31C4[];

s32 func_002BB6E0(void) {
    f32 var_f0;
    f32 var_f2;
    s32 temp_v0;

    if (((*(f32 *)D_005E31C4) - (*(f32 *)D_005E31C0)) <= 2.0f) {
        goto block_17;
    }
    if (func_00BBB9F0() != 0) {
        return 1;
    }
    temp_v0 = func_00BBCBC0();
    if (temp_v0 < 0) {
        var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f2 = (f32) temp_v0;
    }
    if ((s32) (*(u8 *)D_00591BE4) < 0) {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
    } else {
        var_f0 = (f32) (*(u8 *)D_00591BE4);
    }
    if (!(var_f2 <= (2.0f * var_f0))) {
        goto block_15;
    }
    if (func_00BBCB90() <= 0.8f) {
block_17:
        return 0;
    }
block_15:
    return 1;
}
