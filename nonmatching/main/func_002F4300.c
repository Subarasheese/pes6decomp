/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F1490(void *, void *);
void func_002F4300(void *arg0, s32 arg1, void *arg2) {
    s32 var_a1;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (arg2 == NULL) {
            return;
        }
        if (var_a1 >= 8) {
            var_a1 = 7;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        if (func_002F1490(arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4) + (var_a1 * 0x24) + 0xFC, arg2) != 0) {
            M2C_FIELD(arg0, s8 *, 1) = 1;
        }
    }
}
