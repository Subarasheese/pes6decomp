/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA3DF0(s32 arg0, void *arg1) {
    s32 temp_a0;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 < 0x14) {
        if (arg1 != NULL) {
            if (arg0 >= 4) {
                temp_a0 = arg0 - 4;
                var_v0 = temp_a0 >> 3;
                if (temp_a0 < 0) {
                    var_v0 = (s32) (temp_a0 + 7) >> 3;
                }
                M2C_FIELD(arg1, s16 *, 0) = (s16) ((temp_a0 % 8) << 5);
                M2C_FIELD(arg1, s16 *, 2) = (s16) ((var_v0 << 5) + 0xC0);
                M2C_FIELD(arg1, s16 *, 4) = 0x20;
            } else {
                var_v0_2 = arg0 >> 1;
                if (arg0 < 0) {
                    var_v0_2 = (s32) (arg0 + 1) >> 1;
                }
                M2C_FIELD(arg1, s16 *, 0) = (s16) (((arg0 % 2) << 5) + 0xC0);
                M2C_FIELD(arg1, s16 *, 2) = (s16) ((var_v0_2 << 5) + 0x80);
                M2C_FIELD(arg1, s16 *, 4) = 0x20;
            }
            M2C_FIELD(arg1, s16 *, 6) = 0x20;
            return 0x4E7E;
        }
        goto block_4;
    }
block_4:
    M2C_FIELD(arg1, s16 *, 0) = 0;
    M2C_FIELD(arg1, s16 *, 2) = 0;
    M2C_FIELD(arg1, s16 *, 4) = 0;
    M2C_FIELD(arg1, s16 *, 6) = 0;
    return 0;
}
