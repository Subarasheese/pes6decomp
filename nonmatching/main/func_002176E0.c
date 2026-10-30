/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115AB8(int, int, int);
extern s32 D_003E9A04;
extern s32 D_003E9A08;
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern char D_00538234[];

s32 func_002176E0(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;

    var_a1 = arg1;
    var_a2 = arg2;
    if (D_003E9A08 != 0) {
        if (var_a2 != 2) {
            temp_v0 = D_003E9A08 + (D_003E9A04 * 0xC);
            var_a1 = M2C_FIELD(temp_v0, s32 *, 0);
            var_a2 = M2C_FIELD(temp_v0, s32 *, 8);
            M2C_FIELD(arg3, s32 *, 0xD4) = var_a2;
        }
    } else {
        M2C_FIELD(arg3, s32 *, 0xD4) = 0;
        var_a1 = 0;
        var_a2 = 0;
    }
    if (var_a1 <= 0) {
        if ((var_a2 == 2) && (var_a1 == 0)) {
            goto block_8;
        }
        var_a0 = -0x7E;
    } else {
block_8:
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_0053822C) = arg0;
        (*(s32 *)D_00538230) = var_a1;
        (*(s32 *)D_00538234) = var_a2;
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (func_00115AB8(arg0, var_a1, var_a2) != 0) {

        } else {
            M2C_FIELD(arg3, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
    }
    return var_a0;
}
