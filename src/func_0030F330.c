/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00BD9C30();                                /* extern */
s32 func_00BD9DF0();                                /* extern */
extern char D_00591DB7[];

s32 func_0030F330(void) {
    s32 var_v0;

    if ((*(u8 *)D_00591DB7) != 0) {
        return 0;
    }
    var_v0 = func_00BD9DF0() != 0;
    if (var_v0 == 0) {
        var_v0 = func_00BD9C30() != 0;
    }
    return var_v0;
}
