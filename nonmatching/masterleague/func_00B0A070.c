/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00221500(s32);                             /* extern */
s32 func_009492B0(s32, s32);                        /* extern */
s32 func_00970870(s32);                             /* extern */
extern s32 D_003EADEC;

s32 func_00B0A070(s32 arg0) {
    s32 var_s0;

    if (D_003EADEC == 0) {
        return 0;
    }
    var_s0 = func_009492B0(func_00225820() & 0xFF, arg0) & 0xFFFF;
    if (var_s0 == 0) {
        return 0;
    }
    if (func_00970870(var_s0) != 0) {
        if (func_00221500(var_s0) != 1) {
            if (func_00970870(var_s0) == 0) {
                var_s0 = 0;
            }
            return var_s0;
        }
        goto block_9;
    }
block_9:
    return 0;
}
