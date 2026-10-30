/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001ADE68(s32);                           /* extern */
M2C_UNK func_001AE7D8(void *, M2C_UNK, u32, u32, s32); /* extern */

void *func_001B9500(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    u32 temp_a3;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_001ADE68(arg1 * arg2);
    if (temp_v0 != NULL) {
        temp_a3 = (M2C_FIELD(temp_v0, s32 *, -4) & ~3) - 4;
        temp_a4 = temp_a3 < 0x14U;
        if (temp_a3 < 0x25U) {
            var_v1 = temp_v0;
            if (temp_a4 == 0) {
                M2C_FIELD(temp_v0, s32 *, 0) = 0;
                M2C_FIELD(temp_v0, s32 *, 4) = 0;
                var_v1 = temp_v0 + 8;
                if (temp_a3 >= 0x1CU) {
                    M2C_FIELD(temp_v0, s32 *, 8) = 0;
                    var_v1 = temp_v0 + 0x10;
                    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
                    if (temp_a3 >= 0x24U) {
                        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
                        var_v1 = temp_v0 + 0x18;
                        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
                    }
                }
            }
            M2C_FIELD(var_v1, s32 *, 0) = 0;
            M2C_FIELD((var_v1 + 4), s32 *, 4) = 0;
            M2C_FIELD(var_v1, s32 *, 4) = 0;
        } else {
            func_001AE7D8(temp_v0, 0, temp_a3, temp_a3, temp_a4);
        }
    }
    return temp_v0;
}
