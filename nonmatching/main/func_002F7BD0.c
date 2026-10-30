/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002239A0(void);
u8 func_002F7BD0(s32 arg0, s32 arg1) {
    s32 var_v0_2;
    u8 *var_v0;

    if (arg0 < 9) {
        var_v0_2 = func_002239A0() + (arg0 * 0x5C);
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        if (arg1 >= 9) {
            var_v0 = NULL;
        } else {
            var_v0 = var_v0_2 + arg1 + 0x48;
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return *var_v0;
    }
    return 0U;
}
