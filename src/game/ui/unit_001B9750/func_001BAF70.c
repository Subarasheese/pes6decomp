/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s16 *func_001BB370();                               /* extern */

s16 func_001BAF70(s32 arg0) {
    s16 *temp_v0;
    s16 var_s0;

    var_s0 = -1;
    if (arg0 != 0) {
        temp_v0 = func_001BB370();
        if (temp_v0 != NULL) {
            var_s0 = *temp_v0;
        }
    }
    return var_s0;
}
