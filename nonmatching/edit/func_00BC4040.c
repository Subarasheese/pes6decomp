/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BC4040(void *arg0, void *arg1) {
    s8 var_v1;

    M2C_FIELD(arg1, s8 *, 0) = (s8) ((M2C_FIELD(arg0, u8 *, 0) & 0x1F) * 8);
    M2C_FIELD(arg1, s8 *, 1) = (s8) (((u64) ((s64) (u16) M2C_FIELD(arg0, u8 *, 0) << 0x36) >> 0x3B) * 8);
    M2C_FIELD(arg1, s8 *, 2) = (s8) (((u64) ((s64) M2C_FIELD(arg0, u8 *, 1) << 0x39) >> 0x3B) * 8);
    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 1) << 0x38) >> 0x3F) == 0) {
        var_v1 = 0;
    } else {
        var_v1 = 0x80;
    }
    M2C_FIELD(arg1, s8 *, 3) = var_v1;
    M2C_FIELD(arg1, s8 *, 3) = 0xFF;
}
