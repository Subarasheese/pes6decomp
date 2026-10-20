/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00154190(s32);                             /* extern */
s32 func_00154350();                                /* extern */
s32 func_001543E0(s32);                             /* extern */

s32 func_001BCF50(s32 arg0) {
    s32 var_s0;

    var_s0 = func_00154350();
    if (((func_001543E0(arg0) | 0xF0) ^ 0xF0) != 0) {
        var_s0 = (var_s0 | 0xF0) ^ 0xF0;
    }
    return var_s0 | (func_00154190(arg0) & 0xF00000);
}
