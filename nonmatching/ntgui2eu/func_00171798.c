/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
M2C_UNK func_00173078(void *);                      /* extern */
M2C_UNK func_00173558(s32, s32, M2C_UNK, s32, s32); /* extern */
s32 func_001735E8(void *, s32);                     /* extern */
M2C_UNK func_00173B00(void *);                      /* extern */

s32 func_00171798(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xB8C);
        if (temp_v0 > 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF0);
            if (temp_v1 <= 0) {
                M2C_FIELD(arg0, s32 *, 0xB94) = 0;
                M2C_FIELD(arg0, s32 *, 0xBF0) = 0;
                M2C_FIELD(arg0, s32 *, 0xB8C) = 0;
                return 0;
            }
            if (temp_v1 < temp_v0) {
                M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1;
            }
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xB8C);
            temp_a3 = M2C_FIELD(arg0, s32 *, 0xBF0);
            temp_a4 = M2C_FIELD(arg0, s32 *, 0xB80);
            if (func_001735E8(arg0, M2C_FIELD(arg0, s32 *, 0xB8C) - 1) != 0) {
                temp_a1 = temp_v1_2 * 0x24;
                func_00173558(temp_a4 + (temp_a1 - 0x24), temp_a4 + temp_a1, 0x24, temp_a3 - temp_v1_2, temp_a4);
                temp_a0 = M2C_FIELD(arg0, s32 *, 0xD0C);
                M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - 1);
                M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8C) - 1);
                if (temp_a0 > 0) {
                    var_v0_2 = temp_a0 - 1;
                    goto block_14;
                }
                goto block_15;
            }
            temp_a1_2 = temp_v1_2 * 0x24;
            func_00173558(temp_a4 + (temp_a1_2 - 0x48), temp_a4 + temp_a1_2, 0x24, temp_a3 - temp_v1_2, temp_a4);
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xD0C);
            M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - 2);
            M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8C) - 2);
            if (temp_a0_2 > 0) {
                var_v0_2 = temp_a0_2 - 2;
block_14:
                M2C_FIELD(arg0, s32 *, 0xD0C) = var_v0_2;
                if (M2C_FIELD(arg0, s32 *, 0xD0C) <= 0) {
                    goto block_15;
                }
            } else {
block_15:
                func_00173858(arg0);
            }
            func_00173078(arg0);
            func_00173B00(arg0);
            var_v0 = 1;
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_v0;
        }
        return 0;
    }
    return var_v0;
}
