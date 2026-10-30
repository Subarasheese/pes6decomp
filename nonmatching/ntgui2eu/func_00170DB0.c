/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
s32 func_00171A78(void *);                          /* extern */
M2C_UNK func_00173078(void *);                      /* extern */
M2C_UNK func_00173558(s32, s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_001735E8(void *, s32);                     /* extern */
M2C_UNK func_00173B00(void *);                      /* extern */

s32 func_00170DB0(void *arg0) {
    s32 *var_v1_2;
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;

    if (arg0 != NULL) {
        if (func_00171A78(arg0) == 0) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xB8C);
            if (temp_v0 > 0) {
                temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF0);
                if (temp_v1 <= 0) {
                    M2C_FIELD(arg0, s32 *, 0xB8C) = 0;
                    M2C_FIELD(arg0, s32 *, 0xBF0) = 0;
                    return 0;
                }
                if (temp_v1 < temp_v0) {
                    M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1;
                }
                temp_a4 = M2C_FIELD(arg0, s32 *, 0xB8C);
                temp_a5 = M2C_FIELD(arg0, s32 *, 0xB80);
                if (func_001735E8(arg0, M2C_FIELD(arg0, s32 *, 0xB8C) - 1) != 0) {
                    temp_a1 = temp_a4 * 0x24;
                    func_00173558(temp_a5 + (temp_a1 - 0x24), temp_a5 + temp_a1, 0x24, M2C_FIELD(arg0, s32 *, 0xBF0) - temp_a4, temp_a4, temp_a5);
                    var_v0 = M2C_FIELD(arg0, s32 *, 0xBF0) - 1;
                    var_v1 = M2C_FIELD(arg0, s32 *, 0xB8C) - 1;
                } else {
                    var_s1 = 0;
                    var_v1_2 = ((temp_a4 - 1) * 0x24) + temp_a5;
loop_14:
                    if ((u32) (*var_v1_2 - 0x80) < 0x40U) {
                        var_v1_2 -= 0x24;
                        var_s1 += 1;
                        goto loop_14;
                    }
                    temp_s1 = var_s1 + 1;
                    func_00173558(((temp_a4 - temp_s1) * 0x24) + temp_a5, (temp_a4 * 0x24) + temp_a5, 0x24, M2C_FIELD(arg0, s32 *, 0xBF0) - temp_a4, temp_a4, temp_a5);
                    var_v0 = M2C_FIELD(arg0, s32 *, 0xBF0) - temp_s1;
                    var_v1 = M2C_FIELD(arg0, s32 *, 0xB8C) - temp_s1;
                }
                M2C_FIELD(arg0, s32 *, 0xBF0) = var_v0;
                M2C_FIELD(arg0, s32 *, 0xB8C) = var_v1;
                func_00173078(arg0);
                func_00173B00(arg0);
                M2C_FIELD(arg0, s32 *, 0x98) = 2;
                func_00173858(arg0);
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return 1;
            }
            goto block_5;
        }
        return 1;
    }
block_5:
    return 0;
}
