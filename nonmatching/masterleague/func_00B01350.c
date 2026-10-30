/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00B01350(s32 arg0) {
    s32 temp_v0;
    u8 temp_a0;
    u8 temp_v0_2;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x4A5);
        if (temp_a0 != 0xFF) {
            temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x4A4);
            if ((s32) temp_v0_2 >= (s32) temp_a0) {
                if ((s32) temp_a0 >= (s32) temp_v0_2) {
                    return 0;
                }
                return 2;
            }
            return 1;
        }
        return 0;
    }
    return 0xFF;
}
