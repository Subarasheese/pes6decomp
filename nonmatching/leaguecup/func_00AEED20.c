/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

void func_00AEED20(s32 arg0, s8 *arg1, s8 *arg2) {
    s32 temp_t0;
    s8 var_a5;
    s8 var_t1;
    u16 var_a0_2;
    u8 temp_a3;
    u8 var_a0;

    if (D_003EAD44 != NULL) {
        temp_a3 = M2C_FIELD(D_003EAD44, u8 *, 0x231C);
        var_a5 = 0;
        if ((s32) temp_a3 > 0) {
loop_6:
            if (D_003EAD44 != NULL) {
                var_a0 = M2C_FIELD((D_003EAD44 + ((var_a5 & 0xFF) * 4)), u8 *, 0x2304);
            } else {
                var_a0 = 0;
            }
            temp_t0 = var_a0 & 0xFF;
            var_t1 = 0;
            if (temp_t0 > 0) {
loop_13:
                if (D_003EAD44 != NULL) {
                    var_a0_2 = M2C_FIELD((((var_a5 & 0xFF) * 0x4A4) + D_003EAD44 + ((var_t1 & 0xFF) * 4)), u16 *, 8);
                } else {
                    var_a0_2 = 0xFFFF;
                }
                if ((arg0 & 0xFFFF) != (var_a0_2 & 0xFFFF)) {
                    var_t1 = (var_t1 + 1) & 0xFF;
                    if (var_t1 >= temp_t0) {
                        goto block_24;
                    }
                    goto loop_13;
                }
                *arg1 = var_a5;
                *arg2 = var_t1;
                return;
            }
block_24:
            var_a5 = (var_a5 + 1) & 0xFF;
            if (var_a5 >= (s32) temp_a3) {
                goto block_26;
            }
            goto loop_6;
        }
block_26:
        *arg1 = 0;
        goto block_27;
    }
    *arg1 = 0;
block_27:
    *arg2 = 0;
}
