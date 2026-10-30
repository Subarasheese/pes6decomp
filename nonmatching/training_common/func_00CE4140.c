/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
extern void func_001DEF30(void *, s8);
s32 func_00CE4140(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *var_a0;

    temp_v0 = func_001D6E70(arg0, arg1, arg2);
    if (temp_v0 != 0) {
        if (temp_v0 == 0) {
            var_a0 = NULL;
        } else {
            var_a0 = M2C_FIELD(temp_v0, void **, 0xC);
        }
        func_001DEF30(var_a0, 0);
    }
    return temp_v0;
}
