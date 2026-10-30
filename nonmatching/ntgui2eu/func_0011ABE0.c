/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_0011ABE0(void **arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s32 var_a4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_a2;
    void *var_a2;

    temp_a2 = *arg0;
    temp_v1 = M2C_FIELD(temp_a2, u8 *, 0);
    var_a2 = temp_a2 + 1;
    if (temp_v1 & 0x80) {
        var_v0 = temp_v1;
        if ((u32) ((temp_v1 + 0x60) & 0xFF) >= 0x40U) {
            if (temp_v1 >= 0xFDU) {
                goto block_3;
            }
            var_a4 = 0;
            var_a1 = 0;
            var_a3 = 0;
            if ((u32) ((temp_v1 + 0x7F) & 0xFF) < 0x1FU) {
                var_a1 = ((temp_v1 - 0x81) * 2) + 1;
            } else if ((u32) ((temp_v1 + 0x20) & 0xFF) < 0x10U) {
                var_a1 = (temp_v1 * 2) - 0x181;
            } else if ((u32) ((temp_v1 + 0x10) & 0xFF) < 0xDU) {
                temp_v0 = (temp_v1 - 0xF0) * 2;
                var_a4 = 1;
                var_a1 = (temp_v1 >= 0xF4U) ? (temp_v0 + 0x45) : (temp_v0 + 7);
            }
            if (var_a1 != 0) {
                temp_v1_2 = M2C_FIELD(temp_a2, u8 *, 1);
                temp_a0 = temp_v1_2 - 0x40;
                var_a2 += 1;
                if ((u32) (temp_a0 & 0xFF) < 0x3FU) {
                    var_a3 = temp_v1_2 - 0x3F;
                } else if ((u32) ((temp_v1_2 + 0x80) & 0xFF) < 0x1FU) {
                    var_a3 = temp_a0;
                } else if ((u32) ((temp_v1_2 + 0x61) & 0xFF) < 0x5EU) {
                    var_a3 = temp_v1_2 - 0x9E;
                    var_a1 += 1;
                }
                if (var_a4 != 0) {
                    if (var_a1 == 7) {
                        var_a1 = 1;
                    } else if (var_a1 == 0xB) {
                        var_a1 = 5;
                    } else {
                        var_a1 = ((var_a1 ^ 0x4D) == 0) ? 0xF : var_a1;
                    }
                }
                if (var_a1 != 0) {
                    if (var_a3 != 0) {
                        var_v0 = ((var_a4 << 0xF) | ((var_a1 + 0x20) << 8) | (var_a3 + 0x20)) & 0xFFFF;
                    } else {
                        goto block_28;
                    }
                } else {
                    goto block_28;
                }
            } else {
block_28:
                var_v0 = (u8) *(u16 *)0x5B3690;
            }
        }
    } else {
block_3:
        var_v0 = temp_v1;
    }
    *arg0 = var_a2;
    return (u16) var_v0;
}
