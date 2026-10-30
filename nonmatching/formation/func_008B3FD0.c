/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008C9360(void *, void *);              /* extern */
M2C_UNK func_008CB0C0(s32);                         /* extern */
M2C_UNK func_008CB120(void *, void *);              /* extern */
M2C_UNK func_008CB190(void *, void *, M2C_UNK, void *); /* extern */
M2C_UNK func_008E6200(void *, void *);              /* extern */
M2C_UNK func_008E6650(void *, void *);              /* extern */

void func_008B3FD0(void *arg0) {
    s32 var_s1;
    s32 var_v0;
    u8 temp_v1;
    void *temp_a3;
    void *temp_s0;
    void *var_s1_2;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3220);
    var_s1 = 0;
    if (temp_s0 != NULL) {
        func_008CB0C0(temp_s0 + 0xB0C);
        var_v0 = 0;
        do {
            temp_a3 = temp_s0 + (M2C_FIELD(temp_s0, u8 *, 0x946) * 0x52) + var_v0;
            if (((s32) M2C_FIELD(temp_a3, u8 *, 0xA13) >= 2) && ((temp_v1 = M2C_FIELD(temp_a3, u8 *, 0xA1E), (((s32) temp_v1 < 0xB) == 0)) || (M2C_FIELD((arg0 + M2C_FIELD((arg0 + temp_v1), u8 *, 0x96E)), u8 *, 0x39B) != 0))) {
                M2C_FIELD(temp_a3, u8 *, 0xA13) = 1U;
                var_s1 = 1;
                M2C_FIELD((temp_s0 + (M2C_FIELD(temp_s0, u8 *, 0x946) * 0x52) + var_v0), s8 *, 0xA1E) = 0xFF;
            }
            var_v0 += 1;
        } while (var_v0 < 0xB);
        if (var_s1 != 0) {
            func_008CB190(temp_s0 + 0xB0C, temp_s0 + 0x208, 1, temp_a3);
            func_008E6650(temp_s0 + 0x129C, temp_s0 + 0x208);
        }
        if (func_008BC3B0() == 0) {
            if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
                var_s1_2 = M2C_FIELD(arg0, void **, 0x321C);
            } else {
                goto block_13;
            }
        } else {
block_13:
            var_s1_2 = arg0 + 0x208;
        }
        func_008CB120(temp_s0 + 0xB0C, var_s1_2);
        func_008E6200(temp_s0 + 0x129C, var_s1_2);
        func_008C9360(temp_s0 + 0x2B0C, var_s1_2);
        M2C_FIELD(temp_s0, s8 *, 0x1C) = 1;
    }
}
