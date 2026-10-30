/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2A1C0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B28AF0(u8);                          /* extern */

s32 func_00B29BA0(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B2A1C0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xD0) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xD1);
            if ((s32) temp_v1 > 0) {
                M2C_FIELD(temp_v0, u8 *, 0xD1) = (u8) (temp_v1 - 1);
                func_00B28AF0(M2C_FIELD(temp_v0, u8 *, 0xD0));
                func_0026E840(0x8400F802);
            }
        }
    }
    return 0;
}
