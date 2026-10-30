/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B37A60(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B365F0();                            /* extern */

s32 func_00B37470(void) {
    s16 var_v1;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x298) != 1) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x27C);
            if ((temp_v1 >= 3) && (temp_v1 < 0x45)) {
                var_v1 = temp_v1 - 3;
                goto block_15;
            }
            if (temp_v1 >= 3) {
                var_v1 = 0x41;
block_15:
                M2C_FIELD(temp_v0, s16 *, 0x296) = var_v1;
            } else {
                M2C_FIELD(temp_v0, s16 *, 0x296) = 0;
            }
            func_0026E840(0x84028400);
            func_00B365F0();
        }
    }
    return 0;
}
