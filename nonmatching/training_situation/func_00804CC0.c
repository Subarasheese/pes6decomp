/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_00263070(s32, s32 *, s32 *);               /* extern */
s32 func_002630B0();                                /* extern */
void *func_00CDC590();                              /* extern */
void *func_00CF93F0();                              /* extern */
extern char D_00813CF0[];
extern char D_00813D40[];
extern char D_00CFEFF0[];

void func_00804CC0(void) {
    s32 sp30;
    s32 sp80;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a2_4;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    u32 var_a1_4;
    u32 var_a2_3;

    var_a2 = ((void *)D_00813CF0);
    var_a1 = &sp80;
    var_a0 = 0x11;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 4;
        var_a1 += 4;
    } while (var_a0 > 0);
    var_a1_2 = &sp30;
    var_a2_2 = ((void *)D_00813D40);
    var_a0_2 = 0x13;
    do {
        var_a0_2 -= 1;
        *var_a1_2 = *var_a2_2;
        var_a2_2 += 4;
        var_a1_2 += 4;
    } while (var_a0_2 > 0);
    if ((*(s32 *)D_00CFEFF0) != 0) {
        if (func_00263070(var_a0_2, var_a1_2, var_a2_2) != 0) {
            temp_a0 = M2C_FIELD(func_00CDC590(), s32 *, 0xEC);
            var_a2_3 = 0;
            var_a1_3 = &sp30;
loop_7:
            if (temp_a0 != *var_a1_3) {
                var_a2_3 += 1;
                var_a1_3 += 4;
                if (var_a2_3 >= 0x13U) {
                    goto block_9;
                }
                goto loop_7;
            }
        } else {
block_9:
            if (func_002630B0() != 0) {
                temp_a0_2 = M2C_FIELD(func_00CF93F0(), s32 *, 0x168);
                var_a1_4 = 0;
                var_a2_4 = &sp80;
loop_11:
                if (temp_a0_2 != *var_a2_4) {
                    var_a1_4 += 1;
                    var_a2_4 += 4;
                    if (var_a1_4 >= 0x11U) {
                        goto block_13;
                    }
                    goto loop_11;
                }
            } else {
block_13:
                var_s0 = 0;
                var_s1 = ((void *)D_00CFEFF0);
                do {
                    func_001D7C20(M2C_FIELD(var_s1, s32 *, 4), 0);
                    func_001D7D60(M2C_FIELD(var_s1, s32 *, 4), 1);
                    var_s0 += 1;
                    var_s1 += 4;
                } while (var_s0 == 0);
            }
        }
    }
}
