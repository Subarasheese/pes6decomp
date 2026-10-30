/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0092F0A0[];

s64 func_00906340(s32 arg0) {
    M2C_UNK *var_a2;
    s8 temp_v1;
    u64 var_a3;

    var_a3 = 0;
    var_a2 = ((void *)D_0092F0A0);
loop_1:
    temp_v1 = M2C_FIELD(var_a2, s8 *, 0x14);
    if ((temp_v1 >= 0) && (M2C_FIELD((((void *)D_0092F0A0) + temp_v1), u8 *, 0x110) == (arg0 & 0xFF))) {
        return (s64) (var_a3 << 0x38) >> 0x38;
    }
    var_a3 += 1;
    var_a2 += 8;
    if (var_a3 >= 2U) {
        return -1;
    }
    goto loop_1;
}
