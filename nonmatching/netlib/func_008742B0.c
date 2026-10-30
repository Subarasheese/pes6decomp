/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008742B0(void *arg0, s32 *arg1) {
    s32 temp_a2;
    s32 var_a5;

    if (M2C_FIELD(arg0, s32 *, 0x454) >= 0x3FD) {
        return -0x1F5;
    }
    var_a5 = 1;
    do {
        temp_a2 = (4 - var_a5) * 8;
        var_a5 += 1;
        M2C_FIELD((arg0 + M2C_FIELD(arg0, s32 *, 0x454)), s8 *, 0x40) = (s8) ((s32) (*arg1 & (0xFF << temp_a2)) >> temp_a2);
        M2C_FIELD(arg0, s32 *, 0x454) = (s32) (M2C_FIELD(arg0, s32 *, 0x454) + 1);
    } while (var_a5 < 5);
    return 0;
}
