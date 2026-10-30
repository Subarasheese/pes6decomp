/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_00B1E050(u8);                               /* extern */
M2C_UNK func_00B1ED10(s32, u8, u8, u8, u8);         /* extern */

s32 func_00B1E6A0(void) {
    u32 temp_v0;
    u8 temp_v0_2;
    u8 var_v0;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x324) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x32C) == 2) {
                M2C_FIELD(temp_v0, u8 *, 0x31C) = (u8) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x31B) + temp_v0), u8 *, 0x2FA);
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x31A);
                if (temp_v0_2 != 0) {
                    var_v0 = temp_v0_2 - 1;
                } else {
                    var_v0 = 0x62;
                }
                M2C_FIELD(temp_v0, u8 *, 0x31A) = var_v0;
                M2C_FIELD(temp_v0, u8 *, 0x31D) = func_00B1E050(M2C_FIELD(temp_v0, u8 *, 0x31A));
                if (M2C_FIELD(temp_v0, u8 *, 0x31D) == M2C_FIELD(temp_v0, u8 *, 0x31B)) {
                    M2C_FIELD(temp_v0, u8 *, 0x31D) = 0xFFU;
                }
                func_00B1ED10(M2C_FIELD(temp_v0, s32 *, 0x32C), M2C_FIELD(temp_v0, u8 *, 0x31B), M2C_FIELD(temp_v0, u8 *, 0x31A), M2C_FIELD(temp_v0, u8 *, 0x31D), M2C_FIELD(temp_v0, u8 *, 0x31C));
                func_0026E840(0x8400F802);
            }
        }
    }
    return 0;
}
