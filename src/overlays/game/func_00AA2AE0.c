/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00BBB8C0(s32);                             /* extern */

s32 func_00AA2AE0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = ((arg0 / 2) * 8) / 10;
    return temp_s0 + func_00BBB8C0(temp_s0);
}
