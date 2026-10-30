/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002223E0(s32, s32);
void func_00BC5BF0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = arg1 & 0xFFFF;
    if ((temp_v1 >= 0x40) && (temp_v1 < 0xCC)) {
        var_a1 = 3;
    } else if (temp_v1 != 0x126) {
        if ((temp_v1 >= 0xDD) && (temp_v1 < 0xFE)) {
            var_a1 = 3;
        } else {
            var_a1 = 0;
        }
    } else {
        var_a1 = 3;
    }
    func_002223E0(arg0, var_a1);
}
