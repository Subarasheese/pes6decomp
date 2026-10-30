/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
void func_002E4CF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = arg1;
    temp_v0 = Pes6Player_GetParams(arg2);
    if (arg0 != 0) {
        if (var_s0 >= 2) {
            var_s0 = 1;
        } else if (var_s0 < 0) {
            var_s0 = 0;
        }
        M2C_FIELD(((var_s0 * 4) + arg0), void **, 0x10) = temp_v0;
    }
}
