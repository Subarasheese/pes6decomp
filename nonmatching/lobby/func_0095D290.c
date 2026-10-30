/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00936B90(void);
void func_0095D290(s32 *arg0, s32 *arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 var_v1;
    void *temp_v0;
    void *var_a0;

    var_s2 = 0;
    var_s1 = 5;
    var_s0 = -1;
    do {
        temp_v0 = func_00936B90();
        if (temp_v0 != NULL) {
            var_a0 = temp_v0 + 0x3F1A4;
        } else {
            var_a0 = NULL;
        }
        if (var_a0 == NULL) {
            var_a0 = NULL;
        }
        if (var_a0 == NULL) {
            var_v1 = 0x30;
        } else if (var_s2 < 0) {
            var_v1 = 0x30;
        } else if (var_s2 < 5) {
            var_v1 = M2C_FIELD((var_a0 + var_s2), u8 *, 0x187);
        } else {
            var_v1 = 0x30;
        }
        if ((var_v1 & 0xFF) == 0x31) {
            if (var_s2 < var_s1) {
                var_s1 = var_s2;
            }
            if (var_s0 < var_s2) {
                var_s0 = var_s2;
            }
        }
        var_s2 += 1;
    } while (var_s2 < 5);
    if ((var_s1 == 5) || (var_s0 == -1)) {
        var_s1 = 5;
        var_s0 = 5;
    }
    if (arg0 != NULL) {
        *arg0 = var_s1;
    }
    if (arg1 != NULL) {
        *arg1 = var_s0;
    }
}
