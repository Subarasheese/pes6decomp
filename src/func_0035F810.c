/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0035A230();                                /* extern */
s32 func_0035FA60();                                /* extern */

s32 func_0035F810(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((func_0035FA60() != 0) || (func_0035A230() != 0)) {
        var_s0 = 1;
    }
    return var_s0;
}
