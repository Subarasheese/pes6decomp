/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6F10(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 9) & 0x7F) + 1;
    var_v0 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 1) >> 1;
    }
    *arg1 += 0x113;
    return ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x21) << 0x3A) >> 0x3F) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x23) << 0x3D) >> 0x3F) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x11) << 0x38) >> 0x3F)) * 5) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x10) << 0x38) >> 0x3F) * 0xA) + (M2C_FIELD(arg0, u8 *, 0xB) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 0xA) & 0x7F) + var_v0;
}
