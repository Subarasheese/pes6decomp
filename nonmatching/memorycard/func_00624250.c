/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, M2C_UNK);                /* extern */
extern char D_00530C54[];

s32 func_00624250(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_a0;
    s32 var_v0;

    temp_a2 = arg0 & 0xFFFF;
    var_a0 = 0;
    var_v0 = 0;
    if (temp_a2 < 0x1388) {
        var_v0 = (*(s32 *)D_00530C54) + (temp_a2 * 0x7C);
    }
    if (var_v0 != 0) {
        var_a0 = var_v0 + 0x20;
    }
    if (var_a0 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        func_001C4730(var_a0, 0x10);
        return 1;
    }
    return 0;
}
