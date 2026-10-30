/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, M2C_UNK);                /* extern */
extern char D_00530C4C[];

s32 func_00624490(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 < 0x24) {
        var_v0 = (*(s32 *)D_00530C4C) + (arg0 * 0x3D);
    }
    if (var_v0 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        func_001C4730(var_v0, 0x3D);
        return 1;
    }
    return 0;
}
