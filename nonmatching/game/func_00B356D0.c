/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(u8);                           /* extern */

s32 func_00B356D0(void **arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    s32 var_s2;
    void *temp_a0;

    var_s2 = 0;
    var_s1 = 0;
    if (arg2 > 0) {
        do {
            temp_a0 = *arg0;
            if (M2C_FIELD(M2C_FIELD(*func_00B2A420(M2C_FIELD((temp_a0 + (M2C_FIELD(temp_a0, u8 *, 0x13) * 0xB) + var_s1), u8 *, 0x1B4)), void **, 4), u16 *, 0x30) == (arg1 & 0xFFFF)) {
                var_s2 = 1;
            }
            var_s1 += 1;
        } while (var_s1 < arg2);
    }
    return var_s2;
}
