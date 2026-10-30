/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00970870();                                /* extern */
s64 func_00AF2250(s32);                             /* extern */
s64 func_00AF4A60(s32, s32, M2C_UNK);               /* extern */
s32 func_00B02A20(s32);                             /* extern */

s32 func_00AF1E70(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s64 temp_s0;
    s64 temp_v0_2;
    s64 temp_v1;
    u32 var_s1;

    if (func_00970870() != 0) {
        temp_s1 = func_00B02A20(arg0) & 0xFF;
        temp_v0 = temp_s1 & 0xFF;
        temp_s0 = (s64) (func_00AF4A60(arg0, temp_s1, 0) << 0x30) >> 0x30;
        if (temp_v0 >= 0x12) {
            var_s1 = temp_v0 - 0x11;
        } else {
            var_s1 = 0;
        }
        temp_v1 = (s64) (func_00AF2250(arg0) << 0x38) >> 0x38;
        if ((var_s1 >= (u32) (temp_v1 - 1)) && ((u32) (temp_v1 + 1) >= var_s1)) {
            return 1;
        }
        temp_v0_2 = (s64) (temp_s0 << 0x30) >> 0x30;
        if (temp_v0_2 == 0) {
            return 1;
        }
        if (temp_v0_2 <= 0) {
            return 2;
        }
        return 0;
    }
    return 0;
}
