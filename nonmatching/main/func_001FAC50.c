/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
s32 func_001FAE00(s32, s32);                        /* extern */
extern char D_003D2C90[];
extern char D_003D2CC8[];
extern char D_003D2CD0[];
extern char D_0052D610[];
extern char D_0052FF80[];
extern char D_00530300[];
extern char D_00530640[];
extern char D_005306B0[];
extern char D_005306E4[];

M2C_UNK *func_001FAC50(s32 arg0, s32 arg1) {
    M2C_UNK *var_v0;
    s32 var_a1;
    s32 var_v1;
    u16 *var_a0;

    var_a1 = arg1;
    if (var_a1 == 1) {
        var_a1 = 0;
        if ((*(u16 *)D_003D2CC8) != 0xFFFF) {
            var_a0 = ((void *)D_003D2CC8);
loop_3:
            if (arg0 != *var_a0) {
                var_a0 += 2;
                var_a1 += 1;
                if (*var_a0 == 0xFFFF) {
                    goto block_8;
                }
                goto loop_3;
            }
            var_v0 = ((void *)D_003D2CD0);
            var_v1 = var_a1 * 0x34;
            goto block_30;
        }
    }
block_8:
    if (func_001FAE00(arg0, var_a1) == 0) {
        var_v0 = ((void *)D_0052D610);
        var_v1 = (func_002371A0(arg0 & 0xFFFF) & 0xFFFF) * 0x34;
        goto block_30;
    }
    if (arg0 != 0x111) {
        if (arg0 != 0x110) {
            if ((arg0 >= 0xCC) && (arg0 < 0xDD)) {
                var_v0 = ((void *)D_0052FF80);
                var_v1 = (arg0 - 0xCC) * 0x34;
                goto block_30;
            }
            if ((arg0 >= 0xFE) && (arg0 < 0x10E)) {
                var_v0 = ((void *)D_00530300);
                var_v1 = (arg0 - 0xFE) * 0x34;
                goto block_30;
            }
            if ((arg0 >= 0x10E) && (arg0 < 0x110)) {
                var_v0 = ((void *)D_00530640);
                var_v1 = (arg0 - 0x10E) * 0x34;
block_30:
                return var_v0 + var_v1;
            }
            return ((void *)D_003D2C90);
        }
        return ((void *)D_005306E4);
    }
    return ((void *)D_005306B0);
}
