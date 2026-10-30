/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6FB0(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 4) & 0x7F) + 1;
    var_v0 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 1) >> 1;
    }
    *arg1 += 0xFA;
    return var_v0 + ((M2C_FIELD(arg0, u8 *, 2) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 0x19) & 0x7F));
}
