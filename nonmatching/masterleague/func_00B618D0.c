/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void *func_00B618D0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;
    void *temp_v0;
    void *var_a0;
    void *var_a0_2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a0_2 = temp_v0 + 0xCE32;
    } else {
        var_a0_2 = NULL;
    }
    if (var_a0_2 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x48) {
            var_a0 = var_a0_2 + (temp_v1 * 0xAA);
        } else {
            var_a0 = NULL;
        }
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        temp_v1_2 = arg1 & 0xFF;
        if (temp_v1_2 < 0x15) {
            var_v1 = M2C_FIELD(var_a0, u8 *, 0xA8) + temp_v1_2;
            if (var_v1 >= 0x15) {
                var_v1 = var_v1 % 21;
            }
            return var_a0 + (var_v1 * 8);
        }
        return NULL;
    }
    return NULL;
}
