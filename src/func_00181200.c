/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00155A00();                            /* extern */
M2C_UNK func_00155A10();                            /* extern */
s32 func_0015C038(s32, s32, s32, s32, s32, s32);    /* extern */

s32 func_00181200(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_s0;

    func_00155A10();
    temp_s0 = func_0015C038(arg0, arg1, arg2, arg3, arg4, arg5);
    func_00155A00();
    return temp_s0;
}
