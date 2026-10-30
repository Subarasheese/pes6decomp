/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00622A20(s32);                             /* extern */
extern char D_0065EF70[];
extern char D_0065EF78[];
extern void *D_0065EF88;

s32 func_00622840(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 *var_s0;
    s32 *var_s1_2;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    u8 temp_a0;

    temp_a0 = M2C_FIELD(D_0065EF88, u8 *, 0xC);
    if ((u32) (temp_a0 - 4) < 2U) {
        sp30 = (*(s32 *)D_0065EF70);
        if (temp_a0 == 4) {
            sp38 = (*(s32 *)D_0065EF70) + 0x1400;
            var_v0 = (*(s32 *)D_0065EF70) + 0x57400;
        } else {
            sp38 = (*(s32 *)D_0065EF70) + 0x1400;
            var_v0 = (*(s32 *)D_0065EF70) + 0xB0C00;
        }
        sp34 = var_v0;
        var_s1 = 0;
        var_s0 = &sp30;
loop_5:
        if (func_00622A20(*var_s0) != 0) {
            var_s1 += 1;
            var_s0 += 4;
            if (var_s1 >= 3) {
                goto block_18;
            }
            goto loop_5;
        }
        return 0;
    }
    var_s0_2 = 0;
    var_s1_2 = &sp30;
    sp30 = (*(s32 *)D_0065EF70);
    sp34 = (*(s32 *)D_0065EF78);
loop_12:
    if (func_00622A20(*var_s1_2) != 0) {
        var_s0_2 += 1;
        var_s1_2 += 4;
        if (var_s0_2 >= 2) {
block_18:
            return 1;
        }
        goto loop_12;
    }
    return 0;
}
