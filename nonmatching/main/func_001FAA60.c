/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_001FAE00();                                /* extern */
extern char D_003D2D38[];
extern char D_00530720[];

u8 func_001FAA60(s32 arg0, s32 arg1) {
    M2C_UNK *var_v0;

    if (arg1 >= 5) {
        return 0U;
    }
    if (func_001FAE00() == 0) {
        var_v0 = ((void *)D_00530720) + ((func_002371A0(arg0 & 0xFFFF) & 0xFFFF) * 6);
    } else {
        var_v0 = ((void *)D_003D2D38);
    }
    return *(var_v0 + arg1);
}
