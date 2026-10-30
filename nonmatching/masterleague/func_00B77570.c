/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B772F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B77840(u8);                          /* extern */

s32 func_00B77570(void) {
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v1;

    temp_v0 = func_00B772F0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x40);
        if (temp_v1 != 0) {
            var_v1 = temp_v1 - 1;
        } else {
            var_v1 = 0xD;
        }
        M2C_FIELD(temp_v0, u8 *, 0x40) = var_v1;
        func_00B77840(M2C_FIELD(temp_v0, u8 *, 0x40));
        func_0026E840(0x8400F802);
    }
    return 0;
}
