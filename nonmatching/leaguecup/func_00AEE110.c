/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AECAC0(u8);                          /* extern */
M2C_UNK func_00AECCD0();                            /* extern */

s32 func_00AEE110(void) {
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v0;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x414);
        if ((s32) temp_v1 > 0) {
            var_v0 = temp_v1 - 1;
            goto block_8;
        }
        if (temp_v1 == 0) {
            var_v0 = M2C_FIELD(temp_v0, u8 *, 0x415) - 1;
block_8:
            M2C_FIELD(temp_v0, u8 *, 0x414) = var_v0;
        }
        if (temp_v1 != M2C_FIELD(temp_v0, u8 *, 0x414)) {
            func_0026E840(0x8400F803);
            func_00AECCD0();
        }
        M2C_FIELD(temp_v0, u8 *, 0x412) = 0U;
        func_00AECAC0(M2C_FIELD(temp_v0, u8 *, 0x412));
    }
    return 0;
}
