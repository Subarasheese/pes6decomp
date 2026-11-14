/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00C76570(s32, s32, s32);
s32 func_00C766B0(s32, s32, s32);

s32 func_00C76510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r = 0;
    switch (arg0) {
    case 0:
        r = func_00C766B0(arg1, arg2, arg3);
        break;
    case 1:
        r = func_00C76570(arg1, arg2, arg3);
        break;
    }
    return r;
}
