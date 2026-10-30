/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002928B0(s32, s32, s32);                   /* extern */
extern char D_00CB3300[];

s64 func_002BE490(s32 arg0, s32 arg1) {
    s16 var_s0;
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    var_s0 = M2C_FIELD(((temp_a0 * 0x2F4) + (*(s32 *)D_00CB3300)), s16 *, 8);
    if (arg1 == 1) {
        var_s0 = (s16) ((s64) ((var_s0 + func_002928B0(temp_a0, temp_a0 * 0x3F, (*(s32 *)D_00CB3300))) << 0x30) >> 0x30);
    }
    return (s64) var_s0;
}
