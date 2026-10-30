/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AE00(u8, u8);                      /* extern */
M2C_UNK func_00B0CC20();                            /* extern */
s32 func_00B15050(u8, u8);                          /* extern */

s32 func_00B11F00(void) {
    s32 temp_v0_3;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 var_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC04) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0xA99) == 1) {

            } else {
loop_10:
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xC0F);
                if (temp_v0_2 == 0) {
                    var_v0 = 4;
                } else {
                    var_v0 = temp_v0_2 - 1;
                }
                M2C_FIELD(temp_v0, u8 *, 0xC0F) = var_v0;
                temp_v0_3 = func_00B15050(M2C_FIELD(temp_v0, u8 *, 0xC0F), M2C_FIELD(temp_v0, u8 *, 0xA98));
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xC0F);
                if ((temp_a0 != 0) && (temp_v0_3 == 0)) {
                    goto loop_10;
                }
                func_00B0AE00(temp_a0, M2C_FIELD(temp_v0, u8 *, 0xC10));
                func_00B0CC20();
                func_0026E840(0x8400F802);
            }
        }
    }
    return 0;
}
