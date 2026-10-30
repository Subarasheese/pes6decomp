/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F1720(void *);
void func_002F5DB0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    s32 var_a2;
    void *var_v0;

    var_a2 = arg2;
    if (arg0 != NULL) {
        if (arg3 == 0) {
            return;
        }
        if (arg1 != 0) {
            var_v0 = arg0 + (M2C_FIELD(arg0, s8 *, 5) * 8);
        } else {
            var_v0 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 5) + 1) % 2) * 8);
        }
        var_a0 = M2C_FIELD((var_v0 + 0xB8), s32 *, 4) - 1;
        if (var_a0 < var_a2) {

        } else {
            if (var_a2 < 0) {
                var_a2 = 0;
            }
            var_a0 = var_a2;
        }
        func_002F1720(M2C_FIELD(var_v0, s32 *, 0xB8) + (var_a0 * 0x24));
    }
}
