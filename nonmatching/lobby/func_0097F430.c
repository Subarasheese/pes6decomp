/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_0097F940(s32);                             /* extern */
void *func_009812C0();                              /* extern */

void *func_0097F430(s32 arg0) {
    s32 temp_v0;
    s32 var_v0_2;
    void *var_s0;
    void *var_v0;
    void *var_v1;

    if (func_0082C2A0() == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = func_009812C0();
    }
    if (var_s0 == NULL) {
        var_v1 = NULL;
    } else {
        if (func_0082C2A0() == 0) {
            var_v0 = NULL;
        } else {
            var_v0 = func_009812C0();
        }
        if (var_v0 != NULL) {
            var_v0_2 = M2C_FIELD(var_v0, s32 *, 0x141E8);
        } else {
            var_v0_2 = 0;
        }
        if (arg0 < var_v0_2) {
            temp_v0 = func_0097F940(arg0);
            if (temp_v0 < 0x19) {
                var_v1 = NULL;
            } else if (temp_v0 < 0x32) {
                var_v1 = var_s0 + (temp_v0 * 0x670) + 4;
            } else {
                var_v1 = NULL;
            }
        } else {
            var_v1 = NULL;
        }
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0x65B) != 0) {
            return var_v1 + 0x65B;
        }
        return NULL;
    }
    return NULL;
}
