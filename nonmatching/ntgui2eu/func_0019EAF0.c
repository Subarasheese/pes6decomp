/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_0019EAF0(s32 arg0, void *arg1) {
    s32 *var_v1;
    s32 var_v0;
    void *var_a1;

    var_a1 = M2C_FIELD(arg1, void **, 0x28);
    if (var_a1 != NULL) {
loop_1:
        var_v1 = M2C_FIELD(var_a1, s32 **, 8);
        if (var_v1 != NULL) {
            var_v0 = *var_v1;
loop_3:
            if (var_v0 != arg0) {
                var_v1 = M2C_FIELD(var_v1, s32 **, 0x38);
                if (var_v1 != NULL) {
                    var_v0 = *var_v1;
                    goto loop_3;
                }
                goto block_10;
            }
            return var_v1;
        }
block_10:
        var_a1 = M2C_FIELD(var_a1, void **, 0x14);
        if (var_a1 == NULL) {
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}
