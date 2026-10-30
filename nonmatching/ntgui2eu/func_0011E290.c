/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0011E290(void *arg0) {
    s32 temp_a2;
    s8 *temp_v1;
    s8 *var_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x390);
    temp_v1 = M2C_FIELD(arg0, s8 **, 0x394);
    var_v1 = temp_v1 - 1;
    if (temp_a2 == temp_v1) {
        return -1;
    }
loop_2:
    if ((*var_v1 < 0) && ((u32) (((u8) *var_v1 + 0x40) & 0xFF) >= 0x38U)) {
        if (temp_a2 != var_v1) {
            var_v1 -= 1;
            goto loop_2;
        }
    }
    M2C_FIELD(arg0, s8 **, 0x394) = var_v1;
    return 0;
}
