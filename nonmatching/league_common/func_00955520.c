/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
s32 func_00226240();                                /* extern */
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s8);           /* extern */
M2C_UNK func_00955680(s8, s32, s32, s32);           /* extern */
extern void *D_003E77B4;

void func_00955520(s8 arg0, s32 arg1) {
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_s2;
    void *temp_a0;

    temp_s5 = arg0 & 0xFF;
    temp_a0 = D_003E77B4;
    temp_s6 = temp_s5 * 0xC;
    var_s2 = 0;
    if ((s32) M2C_FIELD((temp_s6 + temp_a0), u8 *, 0x4ABB) > 0) {
        do {
            M2C_FIELD(temp_a0, s8 *, 0x16F1) = arg0;
            temp_s0 = func_00234870(arg1, var_s2 & 0xFF, 0, arg0) & 0xFF;
            temp_a0_2 = temp_s0 & 0xFF;
            temp_s1 = func_00234870(arg1, var_s2 & 0xFF, 1, arg0) & 0xFF;
            if (temp_a0_2 < 0x71) {
                temp_v1 = temp_s1 & 0xFF;
                if ((temp_v1 < 0x71) && (temp_a0_2 != temp_v1) && (func_00233EF0(temp_s0, arg1) != 1)) {
                    if (((func_00226710() & 0xFF) == 0x38) && ((func_00226240() & 0xFF) == 1)) {
                        if (temp_s5 >= 0xA) {
                            goto block_9;
                        }
                    } else {
block_9:
                        func_00955680(arg0, arg1, temp_s0, temp_s1);
                    }
                }
            }
            var_s2 += 1;
        } while (var_s2 < (s32) M2C_FIELD((temp_s6 + D_003E77B4), u8 *, 0x4ABB));
    }
}
