/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
s32 func_00B4BAB0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x34D) != 0) {
                temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x990) - 1;
                M2C_FIELD(temp_v0, s32 *, 0x990) = temp_v1;
                if (temp_v1 < 0) {
                    M2C_FIELD(temp_v0, s32 *, 0x990) = 5;
                }
                M2C_FIELD(temp_v0, u8 *, 0x34C) = 0xCU;
            }
        }
    }
    return 0;
}
