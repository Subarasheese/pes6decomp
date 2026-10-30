/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
s32 func_001C7E10(s32, s32);                        /* extern */

void func_00B8FB70(void *arg0, s32 arg1) {
    s32 temp_a0;
    void *var_s0;

    if (arg0 != NULL) {
        if (arg1 == 0) {
            return;
        }
        if (arg0 == NULL) {
            var_s0 = NULL;
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0xC);
        }
        if (var_s0 != NULL) {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x18);
            if ((temp_a0 != 0) && (func_001C7E10(temp_a0, arg1) != 0)) {
                func_001DF820(var_s0, arg1);
            }
        }
    }
}
