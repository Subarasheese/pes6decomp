/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F15C0(void *, s32, s32);                /* extern */

void func_002F3D60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (arg2 == 0) {
            return;
        }
        if (var_a1 >= 8) {
            var_a1 = 7;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        if (func_002F15C0(arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4) + 0xB4 + (var_a1 * 0x24) + 0x48, arg2, arg3) != 0) {
            M2C_FIELD(arg0, s8 *, 1) = 1;
        }
    }
}
