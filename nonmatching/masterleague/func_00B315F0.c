/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B31770(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B30CD0();                            /* extern */

s32 func_00B315F0(void) {
    u32 temp_v0;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xEC) == 2) {
            return 1;
        }
        if (M2C_FIELD(temp_v0, s16 *, 0xDE) != 0) {
            func_00949340(temp_v0 + 0xDE, 0, M2C_FIELD(temp_v0, s16 *, 0xDC));
            M2C_FIELD(temp_v0, s16 *, 0xE2) = (s16) (M2C_FIELD(temp_v0, s16 *, 0xDE) * 0);
            func_00B30CD0();
        }
        return 0;
    }
    return 1;
}
