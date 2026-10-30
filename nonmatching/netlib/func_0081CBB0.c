/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081B660(s32, s32, s32);               /* extern */
extern char D_008A3CF0[];
extern char D_008A3D18[];

s32 func_0081CBB0(s32 arg0) {
    s32 var_s0;

    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    var_s0 = 0;
    do {
        func_0081B660((*(s32 *)D_008A3CF0), var_s0, arg0);
        var_s0 += 1;
    } while (var_s0 < 4);
    return 1;
}
