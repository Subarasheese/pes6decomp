/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B21C0[];

s32 func_008582E0(s64 arg0, u8 arg1) {
    s64 temp_v0;
    void *var_a0;

    if (((void *)D_008B21C0) == NULL) {
        var_a0 = NULL;
    } else {
        temp_v0 = (s64) (arg0 << 0x30) >> 0x30;
        if ((temp_v0 > 0) && (temp_v0 < 9)) {
            var_a0 = ((void *)D_008B21C0) + ((temp_v0 - 1) * 0x1C);
        } else {
            var_a0 = NULL;
        }
    }
    if (var_a0 == NULL) {
        return -1;
    }
    if (arg1 == 0) {
        M2C_FIELD(var_a0, u8 *, 0x15) = arg1;
    } else {
        M2C_FIELD(var_a0, u8 *, 0x15) = (u8) (M2C_FIELD(var_a0, u8 *, 0x15) | (arg1 & 0xFF));
    }
    return 0;
}
