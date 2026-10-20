/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00147D40(s32);                             /* extern */
s32 func_00147D70();                                /* extern */

s32 func_00147E00(s32 arg0, s32 arg1) {
    s32 temp_s0;

    if ((arg0 == 0) && (arg1 == 0)) {
        return 0;
    }
    temp_s0 = func_00147D70();
    return temp_s0 | func_00147D40(arg1);
}
