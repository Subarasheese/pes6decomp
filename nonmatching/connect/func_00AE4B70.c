/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AED3E0(void *, s32);
M2C_UNK func_00AEDF50(s32, s32);                    /* extern */

void func_00AE4B70(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s4;
    void **var_s1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    var_s1 = M2C_FIELD(arg0, void ***, 0);
    var_s2 = 0;
    if (temp_s0 > 0) {
        do {
            if (arg1 != var_s2) {
                var_s4 = 0;
            } else {
                var_s4 = 2;
            }
            func_00AED3E0(M2C_FIELD(*var_s1, void **, 0), var_s4);
            func_00AEDF50(M2C_FIELD(*var_s1, s32 *, 4), var_s4);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < temp_s0);
    }
}
