/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D67E0(void *);
extern void * func_001D6820(s32, s32);
extern void func_001EDA30(void *, s32);
s32 func_00B8F980(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s0;
    void *temp_v0;
    void *var_a0;

    var_s0 = arg4;
    if (arg0 != NULL) {
        if (*arg0 == NULL) {
            temp_v0 = func_001D6820(arg1, arg2);
            *arg0 = temp_v0;
            if (temp_v0 == NULL) {
                return 0;
            }
            if (temp_v0 != NULL) {
                var_a0 = M2C_FIELD(temp_v0, void **, 0xC);
            } else {
                var_a0 = NULL;
            }
            func_001EDA30(var_a0, arg3);
            do {
                func_001D67E0(*arg0);
                var_s0 -= 1;
            } while (var_s0 > 0);
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
