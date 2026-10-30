/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
s32 func_00B61180(u8, u8);                          /* extern */
M2C_UNK func_00B62F70();                            /* extern */

s32 func_00B62D20(void) {
    s32 temp_v1;
    u32 temp_v0;
    u8 var_v0;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x4BC) == 0) {
            temp_v1 = func_00B61180(M2C_FIELD(temp_v0, u8 *, 0x4C0), M2C_FIELD(temp_v0, u8 *, 0x4BE)) & 0xFF;
            if (M2C_FIELD(temp_v0, u8 *, 0x4BD) == 0) {
                if ((s32) M2C_FIELD(((temp_v1 & 0xFF) + temp_v0), u8 *, 0x4C5) > 0) {
                    var_v0 = 1;
                    M2C_FIELD(temp_v0, u8 *, 0x4BD) = 1U;
                } else {
                    var_v0 = 3;
                }
                M2C_FIELD(temp_v0, u8 *, 0x4BC) = var_v0;
            }
            func_00B62F70();
        }
    }
    return 0;
}
