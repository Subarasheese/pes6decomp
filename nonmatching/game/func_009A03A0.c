/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591DB8[];
extern char D_00591DBC[];
extern char D_00591E0C[];

s32 func_009A03A0(void) {
    f32 temp_f1;
    f32 var_f2;
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_00591DB8) - (*(s32 *)D_00591E0C);
    if (temp_v0 < 0) {
        var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f2 = (f32) temp_v0;
    }
    temp_f1 = (*(f32 *)D_00591DBC) * var_f2;
    if (temp_f1 >= 2.1474836e9f) {
        return (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    return (s32) temp_f1;
}
