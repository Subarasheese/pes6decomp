/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_0097F940(s32);                             /* extern */
void *func_009812C0();                              /* extern */

s32 func_0097F840(s32 arg0) {
    s32 temp_v0;
    s32 var_v0_3;
    void *var_s0;
    void *var_v0;
    void *var_v0_2;

    if (func_0082C2A0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = func_009812C0();
    }
    if (var_s0 == NULL) {
        var_v0 = NULL;
    } else {
        if (func_0082C2A0() == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = func_009812C0();
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = M2C_FIELD(var_v0_2, s32 *, 0x141E8);
        } else {
            var_v0_3 = 0;
        }
        if (arg0 < var_v0_3) {
            temp_v0 = func_0097F940(arg0);
            if (temp_v0 < 0x19) {
                var_v0 = NULL;
            } else if (temp_v0 < 0x32) {
                var_v0 = var_s0 + (temp_v0 * 0x670) + 4;
            } else {
                var_v0 = NULL;
            }
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s32 *, 4);
    }
    return 0;
}
