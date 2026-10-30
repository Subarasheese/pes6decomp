/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7F90(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_009B3210();                            /* extern */
M2C_UNK func_009B4980();                            /* extern */

s32 func_009B5800(void) {
    u32 temp_v0;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x400) == 2) {
            return 1;
        }
        func_009B4980();
        if (M2C_FIELD(temp_v0, s16 *, 0x3F0) != 0) {
            func_00949340(temp_v0 + 0x3F0, 0, M2C_FIELD(temp_v0, s16 *, 0x3EE));
            M2C_FIELD(temp_v0, s16 *, 0x3F4) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x3F0) * 0);
            func_009B3210();
        }
        return 0;
    }
    return 1;
}
