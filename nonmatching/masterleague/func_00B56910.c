/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B56910(s64 arg0) {
    s32 var_at;
    s64 temp_a0;
    u8 *var_v0;
    void *temp_v0;
    void *var_v0_2;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_a0 = (s64) (arg0 << 0x30) >> 0x30;
        if (temp_a0 < 0x268) {
            if (temp_a0 >= 0x25E) {
                var_v0_2 = temp_v0 + (temp_a0 - 0x25E);
                var_at = 0x10530;
            } else {
                var_v0_2 = temp_v0 + temp_a0;
                var_at = 0x102BE;
            }
            var_v0 = var_v0_2 + var_at;
        } else {
            var_v0 = NULL;
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return *var_v0 & 1;
    }
    return 0;
}
