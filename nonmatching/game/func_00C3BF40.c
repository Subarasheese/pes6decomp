/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK, s32, s32, s32, s32);     /* extern */
extern char D_00CCB950[];
extern char D_00CCB951[];
extern char D_00CCB952[];
extern char D_00CCB95D[];
extern char D_00CCB95E[];
extern char D_00CCB95F[];

void func_00C3BF40(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s8 *var_s2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_a4 = arg4;
    var_s1 = 0;
    do {
        if (var_s1 != 0) {
            var_s2 = ((void *)D_00CCB95F);
        } else {
            var_s2 = ((void *)D_00CCB952);
        }
        var_s0 = 0;
        var_s3 = 0xFFFF & 0xFFFF;
loop_5:
        temp_v1 = func_00151EA0(0x3E8, var_a1, var_a2, var_a3, var_a4) & 0xFFFF;
        var_a2 = 0xB;
        var_a4 = temp_v1 % 11;
        var_a1 = 1;
        temp_a0 = var_s3 & 0xFFFF;
        var_a3 = 1 << var_a4;
        if (!(temp_a0 & var_a3)) {
            do {
                var_a4 = (s32) (var_a4 + 1) % 11;
                var_a3 = 1 << var_a4;
            } while (!(temp_a0 & var_a3));
        }
        var_s0 = (var_s0 + 1) & 0xFF;
        *var_s2 = (s8) var_a4;
        var_s3 = var_s3 & (~var_a3 & 0xFFFF) & 0xFFFF;
        var_s2 += 1;
        if (var_s0 < 0xB) {
            goto loop_5;
        }
        var_s1 = (var_s1 + 1) & 0xFF;
    } while (var_s1 < 2);
    (*(s8 *)D_00CCB95E) = 0;
    (*(s8 *)D_00CCB95D) = 0;
    (*(s8 *)D_00CCB951) = 0;
    (*(s8 *)D_00CCB950) = 0;
}
