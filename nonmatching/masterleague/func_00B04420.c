/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00(s32);                           /* extern */
s32 func_009847F0(s32);                             /* extern */

s32 func_00B04420(s32 arg0, s32 arg1) {
    u32 temp_a0;
    u32 var_v1;
    u64 temp_v1;
    void *temp_s0;

    temp_s0 = func_00223E00(arg1);
    temp_a0 = func_009847F0(arg0) & 0xFF;
    if (temp_a0 != 0) {
        temp_v1 = (u64) ((s64) M2C_FIELD(temp_s0, u8 *, 5) << 0x38) >> 0x3A;
        if (temp_v1 == 0) {
            var_v1 = 0;
        } else {
            var_v1 = (u32) (temp_v1 * 0x64) / temp_a0;
        }
        if (var_v1 < 0x4BU) {
            if (var_v1 < 0x32U) {
                if (var_v1 < 0x19U) {
                    return 3;
                }
                return 2;
            }
            return 1;
        }
        return 0;
    }
    return 3;
}
