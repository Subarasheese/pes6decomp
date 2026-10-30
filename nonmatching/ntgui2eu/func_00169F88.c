/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_00169F88(void *arg0, s32 *arg1) {
    s32 *var_a1;

    var_a1 = arg1;
    if (var_a1 == NULL) {
        var_a1 = M2C_FIELD(arg0, s32 **, 0x84C);
loop_2:
        if (M2C_FIELD(var_a1, s32 *, 0) == 0) {
            var_a1 = M2C_FIELD(var_a1, s32 **, 0xC);
            if (var_a1 == (arg0 + 0x840)) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_2;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_a1;
    }
loop_9:
    var_a1 = M2C_FIELD(var_a1, s32 **, 0xC);
    if (var_a1 == NULL) {
        return NULL;
    }
    if (var_a1 != (arg0 + 0x840)) {
        if (*var_a1 == 0) {
            goto loop_9;
        }
        return var_a1;
    }
    return NULL;
}
