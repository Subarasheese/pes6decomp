/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_00947EB0(s32 arg0, s8 arg1) {
    s32 var_s2;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v0;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, void **, 0x139A4);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s2 = M2C_FIELD(var_v0, s32 *, 0x7B70);
        if (var_s2 >= 0) {
            if (var_s2 >= 0x65) {
                var_s2 = 0x64;
            }
        } else {
            var_s2 = 0;
        }
    } else {
        var_s2 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_v1 = M2C_FIELD(temp_v0_2, s32 *, 0x139A4);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
    } else if (arg0 < var_s2) {
        var_v0_2 = var_v1 + (arg0 * 0x13C);
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        M2C_FIELD(var_v0_2, s8 *, 0x3A) = arg1;
        return 1;
    }
    return 0;
}
