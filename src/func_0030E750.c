/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00AFBA70();                                /* extern */

s32 func_0030E750(s32 arg0) {
    if ((arg0 & 0xFF) == 0xFF) {
        return 1;
    }
    return func_00AFBA70();
}
