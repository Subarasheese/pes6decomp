/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001F08B0(s32);
s32 func_001C7E10(s32, s32);                        /* extern */

void func_00B8FAF0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    void *var_s0;

    temp_s1 = func_001F08B0(arg1);
    if ((arg0 != NULL) && (temp_s1 != 0)) {
        if (arg0 != NULL) {
            var_s0 = M2C_FIELD(arg0, void **, 0xC);
        } else {
            var_s0 = NULL;
        }
        if (var_s0 != NULL) {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0x18);
            if ((temp_a0 != 0) && (func_001C7E10(temp_a0, temp_s1) != 0)) {
                func_001DF820(var_s0, temp_s1);
            }
        }
    }
}
