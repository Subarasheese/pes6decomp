/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002D0640(s32, s32, M2C_UNK, u32, s32); /* extern */
M2C_UNK func_002D0A00(s32, void *, s32);            /* extern */
extern char D_003AF190[];
extern char D_003AF1B0[];
extern char D_003AF220[];
extern char D_003AF250[];
extern char D_003AF2E0[];

void func_002D0430(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a1_3;
    s32 *var_s0;
    s32 temp_a4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0_2;
    u32 var_a3;
    u32 var_s1;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 temp_a0;
    u8 temp_a1;

    if (arg0 != NULL) {
        var_s1 = 0;
        var_s0 = ((void *)D_003AF2E0);
        do {
            temp_a4 = *var_s0;
            temp_a0 = M2C_FIELD((arg0 + temp_a4), u8 *, 0x2A);
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x2A);
            switch (temp_a4) {                      /* irregular */
            default:
                var_a3 = 0x107 - (temp_a1 & 0xFF);
                break;
            case 1:
                if (!(temp_a1 & 0xFF)) {
                    var_a3 = (temp_a0 & 0xFF) + 0x18;
                } else {
                    var_a3 = temp_a0 & 0xFF;
                }
                break;
            case 2:
                if (!(temp_a1 & 0xFF)) {
                    var_a2 = 0;
                    var_a1 = ((void *)D_003AF190);
loop_12:
                    if ((temp_a0 & 0xFF) == *var_a1) {
                        var_a3 = var_a2 + 0xCC;
                    } else {
                        var_a2 += 1;
                        var_a1 += 1;
                        if (var_a2 >= 0x13) {
                            goto block_16;
                        }
                        goto loop_12;
                    }
                } else {
block_16:
                    var_a3 = (temp_a0 & 0xFF) + 0x30;
                }
                break;
            case 4:
            case 3:
                if (!(temp_a1 & 0xFF)) {
                    var_a2_2 = 0;
                    var_a1_2 = ((void *)D_003AF1B0);
loop_20:
                    if ((temp_a0 & 0xFF) == *var_a1_2) {
                        var_a3 = var_a2_2 + 0xDF;
                    } else {
                        var_a2_2 += 1;
                        var_a1_2 += 1;
                        if (var_a2_2 >= 0x27) {
                            goto block_24;
                        }
                        goto loop_20;
                    }
                } else {
block_24:
                    var_a3 = (temp_a0 & 0xFF) + 0x5A;
                }
                break;
            }
            if (arg1 == 0) {
                var_a1_3 = ((void *)D_003AF250);
            } else {
                var_a1_3 = ((void *)D_003AF220);
            }
            func_002D0640(arg2, *(var_a1_3 + (((var_a3 / 30) + (var_a3 >> 0x1F)) * 4)), 0, var_a3, temp_a4);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 5U);
        var_s0_2 = 0;
        if (0 < 5) {
            do {
                func_002D0A00(arg2, arg0 + (var_s0_2 * 2), var_s0_2);
                var_s0_2 += 1;
            } while (var_s0_2 < 5);
        }
    }
}
