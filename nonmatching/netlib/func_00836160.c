/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5F84[];
extern char D_008AA658[];

s32 func_00836160(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s8 var_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0xF8A4;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        return 1;
    }
    if (arg0 < 0) {
        return 1;
    }
    if (arg0 >= 4) {
        return 1;
    }
    if ((*(s32 *)D_008A5F84) != 4) {
        return 1;
    }
    if (func_00D0BAF0() == 0) {
        var_v0 = 0;
    } else {
        var_v0 = (*(s8 *)D_008AA658);
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 8) {
        if (M2C_FIELD(((arg0 * 0x10) + var_s0), s32 *, 0x7C0) != 0) {
            return M2C_FIELD((arg0 + var_s0), s8 *, 0x8EC) != 0;
        }
        return 0;
    }
    return 1;
}
