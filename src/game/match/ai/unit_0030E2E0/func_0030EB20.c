/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 func_00993990(s32);                              /* extern */

s32 func_0030EB20(u8 *arg0, s32 arg1) {
    *arg0 = func_00993990(arg1);
    return *arg0 != 0;
}
