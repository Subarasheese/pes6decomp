/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C68A0(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = (M2C_FIELD(arg0, u8 *, 0x17) & 0x7F) + 1;
    var_a2 = temp_v0 >> 1;
    if (temp_v0 < 0) {
        var_a2 = (s32) (temp_v0 + 1) >> 1;
    }
    temp_v1 = (M2C_FIELD(arg0, u8 *, 0x18) & 0x7F) + 1;
    var_v0_2 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0_2 = (s32) (temp_v1 + 1) >> 1;
    }
    temp_v1_2 = (M2C_FIELD(arg0, u8 *, 9) & 0x7F) + 1;
    var_v0 = temp_v1_2 >> 2;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 3) >> 2;
    }
    *arg1 += 0x8C;
    return var_v0 + (var_a2 + var_v0_2) + ((M2C_FIELD(arg0, u8 *, 0x1E) & 1) * 0xF);
}
