/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void *func_00223E00(s16, s32);                      /* extern */
s32 func_0096E440();                                /* extern */

void func_00B2B5D0(s16 arg0) {
    s32 var_a1;
    s32 var_s0;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    var_s0 = 0;
    if (func_0096E440() != 0) {
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            var_a1 = 0;
            var_a0 = temp_v0;
loop_3:
            if (M2C_FIELD(var_a0, u16 *, 0x32EEE) != 0) {
                var_a1 += 1;
                var_a0 += 2;
                if (var_a1 < 0x3E8) {
                    goto loop_3;
                }
            } else {
                var_s0 = 1;
                M2C_FIELD(((var_a1 * 2) + temp_v0), s16 *, 0x32EEE) = arg0;
            }
            if ((var_a1 >= 0x3E8) && !(var_s0 & 0xFF)) {
                temp_v0_2 = func_00223E00(arg0, var_a1);
                if (temp_v0_2 != NULL) {
                    temp_a1 = M2C_FIELD(temp_v0_2, u8 *, 6);
                    if ((temp_a1 & 0x3F) == 5) {
                        M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) ((temp_a1 & ~0x3F) | 6);
                    }
                    temp_a1_2 = M2C_FIELD(temp_v0_2, u8 *, 6);
                    if ((temp_a1_2 & 0x3F) == 1) {
                        M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) ((temp_a1_2 & ~0x3F) | 2);
                    }
                }
            }
        }
    }
}
