/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_00B61310(void *, s32, s32);            /* extern */

void func_00B61270(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a0 = temp_v0 + 0xCE32;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x48) {
            var_a0_2 = var_a0 + (temp_v1 * 0xAA);
        } else {
            var_a0_2 = NULL;
        }
    } else {
        var_a0_2 = NULL;
    }
    func_00B61310(var_a0_2, arg1, arg2);
}
