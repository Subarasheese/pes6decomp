/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_001FAE00();                                /* extern */
extern char D_003D2C60[];
extern char D_0052B360[];
extern char D_0052D160[];
extern char D_0052D3D0[];

u8 func_001FA920(s32 arg0, s32 arg1) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    s32 var_v1;

    if (func_001FAE00() == 0) {
        var_v0_2 = ((void *)D_0052B360);
        var_v1 = (func_002371A0(arg0 & 0xFFFF) & 0xFFFF) * 0x24;
        goto block_11;
    }
    if ((arg0 >= 0xCC) && (arg0 < 0xDD)) {
        var_v0_2 = ((void *)D_0052D160);
        var_v1 = (arg0 - 0xCC) * 0x24;
        goto block_11;
    }
    if ((arg0 >= 0xFE) && (arg0 < 0x10E)) {
        var_v0_2 = ((void *)D_0052D3D0);
        var_v1 = (arg0 - 0xFE) * 0x24;
block_11:
        var_v0 = var_v0_2 + var_v1;
    } else {
        var_v0 = ((void *)D_003D2C60);
    }
    return M2C_FIELD((arg1 + var_v0), u8 *, 0xC);
}
