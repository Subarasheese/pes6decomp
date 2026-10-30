/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6B50(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 7) & 0x7F) + 1;
    var_v0_2 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0_2 = (s32) (temp_v1 + 1) >> 1;
    }
    temp_v1_2 = var_v0_2 + ((M2C_FIELD(arg0, u8 *, 0x15) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 8) & 0x7F));
    var_v0 = temp_v1_2 >> 1;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 1) >> 1;
    }
    *arg1 += 0xB4;
    return var_v0 + (((M2C_FIELD(arg0, u8 *, 0x1E) & 1) * 0xA) + ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x38) >> 0x3F) * 0x19) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x12) << 0x38) >> 0x3F) * 0x14)));
}
