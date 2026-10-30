/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B08490();                            /* extern */

s32 func_00B09C80(void) {
    u32 temp_v0;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x5E0) != 1) {
            if (M2C_FIELD(temp_v0, u8 *, 0x5D8) != 0) {

            } else {
                func_00B08490();
                M2C_FIELD(temp_v0, u8 *, 0x5D8) = 3U;
                M2C_FIELD(temp_v0, u8 *, 0x5E0) = 1U;
                M2C_FIELD(temp_v0, s32 *, 0x5DC) = 0;
                func_00958000(0x9B);
                func_0026E840(0x84028400);
            }
        }
    }
    return 0;
}
