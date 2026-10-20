/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00C17D30(s32);                             /* extern */

s32 func_00310820(s32 *arg0, s32 arg1) {
    *arg0 = func_00C17D30(arg1 & 0xFF) & 0xFFFF;
    return 1;
}
