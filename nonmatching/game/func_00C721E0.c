/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C76410(s32);                             /* extern */
s32 func_00C76460(s32);                             /* extern */
extern s32 D_003EA820;
extern char D_00591DCC[];
extern char D_00CCBD30[];

void func_00C721E0(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_s2;
    s8 var_v1;

    var_s2 = 0;
    var_s0 = ((void *)D_00CCBD30);
    do {
        var_s1 = 1;
        if (func_00C76460(var_s2 ^ (*(u8 *)D_00591DCC)) == 0) {
            if (func_00C76410(var_s2 ^ (*(u8 *)D_00591DCC)) != 0) {
                goto block_4;
            }
        } else {
block_4:
            var_s1 = 0;
        }
        var_v1 = arg0 != 0;
        D_003EA820 = var_s2;
        if (var_v1 != 0) {
            var_v1 = var_s1 != 0;
        }
        M2C_FIELD(var_s0, s8 *, 0x28) = var_v1;
        var_s2 += 1;
        var_s0 += 0x50;
    } while (var_s2 < 2);
}
