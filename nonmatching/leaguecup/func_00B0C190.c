/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

void func_00B0C190(s32 arg0, s8 *arg1, s8 *arg2) {
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;
    s8 var_a7;
    s8 var_t0;
    u16 temp_t8;
    u16 var_t1;
    u8 temp_a5;

    if (D_003EAD68 != NULL) {
        temp_a5 = M2C_FIELD(D_003EAD68, u8 *, 0xDF8);
        var_a7 = 0;
        if ((s32) temp_a5 > 0) {
            temp_t8 = 0xFFFF & 0xFFFF;
loop_6:
            if (D_003EAD68 == NULL) {
                var_v1 = 0;
            } else {
                temp_t0 = var_a7 & 0xFF;
                if (temp_t0 >= (s32) M2C_FIELD(D_003EAD68, u8 *, 0xDF8)) {
                    var_v1 = 0;
                } else {
                    var_a0 = (M2C_FIELD(D_003EAD68, s32 *, 0xDFC) - (temp_t0 * 0x14)) & 0xFF;
                    if (var_a0 >= 0x14) {
                        var_a0 = 0x14;
                    }
                    var_v1 = var_a0 & 0xFF;
                }
            }
            temp_a0 = var_v1 & 0xFF;
            var_t0 = 0;
            if (temp_a0 > 0) {
                temp_v1 = var_a7 & 0xFF;
loop_16:
                if (D_003EAD68 == NULL) {
                    var_t1 = temp_t8;
                } else if (temp_v1 >= (s32) M2C_FIELD(D_003EAD68, u8 *, 0xDF8)) {
                    var_t1 = temp_t8;
                } else if (temp_v1 >= 0x14) {
                    var_t1 = temp_t8;
                } else {
                    var_t1 = M2C_FIELD(((temp_v1 * 0x28) + D_003EAD68 + ((var_t0 & 0xFF) * 2)), u16 *, 0x1330);
                }
                if ((arg0 & 0xFFFF) != (var_t1 & 0xFFFF)) {
                    var_t0 = (var_t0 + 1) & 0xFF;
                    if (var_t0 >= temp_a0) {
                        goto block_28;
                    }
                    goto loop_16;
                }
                *arg1 = var_a7;
                *arg2 = var_t0;
                return;
            }
block_28:
            var_a7 = (var_a7 + 1) & 0xFF;
            if (var_a7 >= (s32) temp_a5) {
                goto block_30;
            }
            goto loop_6;
        }
block_30:
        *arg1 = 0;
        goto block_31;
    }
    *arg1 = 0;
block_31:
    *arg2 = 0;
}
