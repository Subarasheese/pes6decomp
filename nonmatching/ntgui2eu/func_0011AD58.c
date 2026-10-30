/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3690[];

void func_0011AD58(u8 **arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_a2_2;
    s8 var_v0_4;
    u16 var_a1;
    u32 temp_a0;
    u32 temp_a4;
    u32 temp_a5;
    u32 var_v0_3;
    u8 *temp_a2;
    u8 *var_a2;

    var_a1 = arg1 & 0xFFFF;
    temp_a2 = *arg0;
    if (var_a1 >= 0x80U) {
        var_v0 = 1;
        if ((u32) (var_a1 - 0xA0) >= 0x40U) {
            temp_v1 = (var_a1 >> 8) & 0x7F;
            temp_a0 = var_a1 & 0x7F;
            if ((u32) (temp_v1 - 0x21) < 0x5EU) {
                var_v0 = 0;
                if (temp_a0 >= 0x21U) {
                    var_v0 = 0;
                    if (temp_a0 < 0x7FU) {
                        if ((var_a1 >> 0xF) != 0) {
                            if ((temp_v1 == 0x22) || (temp_v1 == 0x26) || (temp_v1 == 0x27) || ((var_v0 = 0, (((u32) (temp_v1 - 0x29) < 3U) == 0)) && (var_v0 = 1, (((u32) (temp_v1 - 0x30) < 0x3EU) != 0)))) {
                                goto block_11;
                            }
                        } else {
                            goto block_12;
                        }
                    }
                }
            } else {
block_11:
                var_v0 = 0;
            }
        }
    } else {
block_12:
        var_v0 = 1;
    }
    var_v0_2 = var_a1 < 0x80U;
    if (var_v0 == 0) {
        var_a1 = (*(u16 *)D_005B3690);
        var_v0_2 = var_a1 < 0x80U;
    }
    if ((var_v0_2 != 0) || ((u32) (var_a1 - 0xA0) < 0x40U) || ((u32) (var_a1 - 0xFD) < 3U)) {
        *temp_a2 = (u8) var_a1;
        var_a2 = temp_a2 + 1;
    } else {
        temp_a3 = (var_a1 >> 8) & 0x7F;
        temp_a5 = (var_a1 & 0x7F) - 0x20;
        temp_a4 = temp_a3 - 0x20;
        if ((var_a1 >> 0xF) == 0) {
            var_a2_2 = temp_a2 + 1;
            if (temp_a4 < 0x3FU) {
                var_v0_3 = temp_a3 + 0xE1;
            } else {
                var_v0_3 = temp_a3 + 0x161;
            }
            *temp_a2 = (u8) (var_v0_3 >> 1);
        } else {
            if (temp_a4 < 0x10U) {
                *temp_a2 = ((u32) (temp_a3 + 0x1BF) >> 1) - ((temp_a4 >> 3) * 3);
            } else {
                *temp_a2 = (u8) ((u32) (temp_a3 + 0x17B) >> 1);
            }
            var_a2_2 = temp_a2 + 1;
        }
        if (!(temp_a4 & 1)) {
            *var_a2_2 = temp_a5 + 0x9E;
            var_a2 = var_a2_2 + 1;
        } else {
            var_a2 = var_a2_2 + 1;
            if (temp_a5 < 0x40U) {
                var_v0_4 = temp_a5 + 0x3F;
            } else {
                var_v0_4 = temp_a5 + 0x40;
            }
            *var_a2_2 = var_v0_4;
        }
    }
    *arg0 = var_a2;
}
