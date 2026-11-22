/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002D32A0(void);

s32 func_00CD4A40(void) {
    s32 var_s0;

    var_s0 = 0;
    if (func_002D32A0() == 0) {
        var_s0 = 1;
    }
    return var_s0;
}
