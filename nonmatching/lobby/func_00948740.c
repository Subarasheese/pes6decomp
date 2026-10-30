/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

s32 func_00948740(s32 arg0) {
    s32 *var_v0;
    s32 var_s1;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0_2 = M2C_FIELD(temp_v0, void **, 0x139A4);
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_s1 = M2C_FIELD(var_v0_2, s32 *, 0x7B70);
        if (var_s1 >= 0) {
            if (var_s1 >= 0x65) {
                var_s1 = 0x64;
            }
        } else {
            var_s1 = 0;
        }
    } else {
        var_s1 = 0;
    }
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_v1 = M2C_FIELD(temp_v0_2, s32 *, 0x139A4);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < var_s1) {
        var_v0 = var_v1 + (arg0 * 0x13C);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return *var_v0;
    }
    return 0;
}
