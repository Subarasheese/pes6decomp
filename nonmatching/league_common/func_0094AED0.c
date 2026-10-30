/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002260A0();                                /* extern */
s32 func_00230100();                                /* extern */
s32 func_0094B600(s32, s32);                        /* extern */

s32 func_0094AED0(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;

    temp_s1 = func_00230100();
    temp_v0 = func_002260A0();
    if (temp_v0 != 0) {
        temp_a1 = func_0094B600(arg1, arg2) & 0xFFFF;
        if (temp_a1 >= 0x400) {
            return 0;
        }
        temp_v1 = arg3 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 2:
            return M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), u8 *, 0x19B2A) & 1;
        case 1:
            return ((u64) ((s64) M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), u8 *, 0x19B2A) << 0x3C) >> 0x3D) & 0xFF;
        case 0:
            return ((u64) ((s64) M2C_FIELD((temp_v0 + (temp_a1 * 0x1A) + (temp_s1 * 4)), u8 *, 0x19B2A) << 0x38) >> 0x3C) & 0xFF;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
