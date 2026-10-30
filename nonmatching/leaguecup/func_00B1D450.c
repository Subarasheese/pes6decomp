/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B1CAE0();                            /* extern */
s32 func_00B1DDD0();                                /* extern */

s32 func_00B1D450(void) {
    s32 temp_v0_3;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x94) == 0) {

        } else {
            temp_v0_2 = func_00B1DE00();
            if ((temp_v0_2 != 0) && (func_00B1DDD0() != 0)) {
                temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0xB0) - 1;
                M2C_FIELD(temp_v0_2, s32 *, 0xB0) = temp_v0_3;
                if (temp_v0_3 >= 2) {
                    M2C_FIELD(temp_v0_2, s32 *, 0xB0) = 0;
                }
                if (M2C_FIELD(temp_v0_2, s32 *, 0xB0) < 0) {
                    M2C_FIELD(temp_v0_2, s32 *, 0xB0) = 1;
                }
                func_00B1CAE0();
                func_0026E840(0x8400F803);
            }
        }
    }
    return 0;
}
