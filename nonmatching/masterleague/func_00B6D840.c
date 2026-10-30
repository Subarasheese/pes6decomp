/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00949130(u8, M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00B6D0B0();                            /* extern */

s32 func_00B6D840(void) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    u32 temp_v0;
    u8 temp_v1_2;

    temp_v0 = func_00B6DB70();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x60);
        if (temp_v1 == 6) {
            var_a3 = (0x6A - (temp_v1 * 0x10)) & 0xFF;
            if (var_a3 < 9) {
                var_a2 = var_a3;
            } else {
                goto block_12;
            }
        } else {
            var_a3 = 0x10;
block_12:
            var_a2 = 8;
        }
        temp_v1_2 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x5C), 1, var_a2, var_a3) & 0xFF;
        if (temp_v1_2 != M2C_FIELD(temp_v0, u8 *, 0x5C)) {
            M2C_FIELD(temp_v0, u8 *, 0x5C) = temp_v1_2;
            func_00B6D0B0();
            func_0026E840(0x8400F802);
        }
    }
    return 0;
}
