/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
s32 func_00819730();                                /* extern */
extern char D_008883D8[];
extern char D_008883E0[];
extern char D_008883E8[];
extern char D_008A3CD0[];

s32 func_00819B60(s32 *arg0, M2C_UNK **arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s4;

    if (arg2 >= 0) {
        if (arg3 >= 0) {
            if (arg2 >= 0xC) {
                var_a0 = 0x01F6003D;
            } else {
                var_a0 = 0x01F6003C;
            }
            var_s4 = func_001F08B0(var_a0);
            sprintf(((void *)D_008A3CD0), ((void *)D_008883E8), arg2 % 12, arg3 & 0xFF);
            var_v0 = ((void *)D_008A3CD0);
        } else {
            goto block_4;
        }
    } else {
block_4:
        var_s4 = (s32) ((void *)D_008883D8);
        var_v0 = ((void *)D_008883E0);
    }
    if (arg0 != NULL) {
        *arg0 = var_s4;
    }
    if (arg1 != NULL) {
        *arg1 = var_v0;
    }
    var_s0 = 0;
    if (func_00819730() == 1) {
        var_s0 = 1;
    }
    return var_s0;
}
