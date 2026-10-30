/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

void *func_00946840(s32 arg0) {
    s32 var_s1;
    s32 var_v1_3;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v1_2 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_v1_2 = NULL;
    }
    if (var_v1_2 != NULL) {
        var_s1 = M2C_FIELD(var_v1_2, s32 *, 0xB540);
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
        var_v1_3 = M2C_FIELD(temp_v0_2, s32 *, 0x117E8);
    } else {
        var_v1_3 = 0;
    }
    if (var_v1_3 == 0) {
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else if (arg0 < var_s1) {
        var_v1 = var_v1_3 + (arg0 * 0x1D0);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0xCD) != 0) {
            return var_v1 + 0xCD;
        }
        return NULL;
    }
    return NULL;
}
