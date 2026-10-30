/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B1EB50();                            /* extern */

s32 func_00B1EA30(void) {
    u32 temp_v0;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x32C) == 3) {
            return 1;
        }
        if (M2C_FIELD(temp_v0, s16 *, 0x324) != 0) {
            func_00949340(temp_v0 + 0x324, 0, M2C_FIELD(temp_v0, s16 *, 0x322));
            M2C_FIELD(temp_v0, s16 *, 0x326) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x324) * 0);
            func_00B1EB50();
        }
        return 0;
    }
    return 1;
}
