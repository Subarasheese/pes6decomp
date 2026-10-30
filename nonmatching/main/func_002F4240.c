/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F1920(void *, s32);
void func_002F4240(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a2;
    void *var_v0;

    var_a2 = arg2;
    if (arg0 != NULL) {
        if (var_a2 >= 8) {
            var_a2 = 7;
        } else if (var_a2 < 0) {
            var_a2 = 0;
        }
        if (arg1 == 0) {
            var_v0 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4);
        } else {
            var_v0 = arg0 + (M2C_FIELD(arg0, s8 *, 8) * 0x4A4);
        }
        func_002F1920(var_v0 + 0xB4 + (var_a2 * 0x24) + 0x48, arg3);
    }
}
