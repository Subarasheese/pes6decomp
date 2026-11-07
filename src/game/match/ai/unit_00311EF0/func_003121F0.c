/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00277360(s32);                             /* extern */

s32 func_003121F0(s32 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 = 0;
        return 0;
    }
    *arg0 = func_00277360(arg1);
    return 1;
}
