/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *arg0, s32 arg1) {
    M2C_UNK **temp_v0;
    M2C_UNK *var_v0;

    temp_v0 = M2C_FIELD(arg0, M2C_UNK ***, 0x4C);
    if (temp_v0 != arg1) {
        var_v0 = *temp_v0;
        if (var_v0 == NULL) {
            return 0;
        }
loop_7:
        if (var_v0 != arg1) {
            var_v0 = *var_v0;
            if (var_v0 == NULL) {
                return 0;
            }
            goto loop_7;
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
