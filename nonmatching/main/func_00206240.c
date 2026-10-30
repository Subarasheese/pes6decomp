/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00533048[];

s32 func_00206240(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_v0;

    var_a0 = arg0 & 0xFF & 0xF0 & 0xFF;
    var_v0 = 0;
    if ((var_a0 != 0xA0) && (var_a0 != 0x90) && (var_a0 != 0x60) && (var_a0 != 0x50)) {

    } else {
        var_a0 = arg1 & 0xFF & 0xF0 & 0xFF;
    }
    temp_a1 = var_a0 & 0xFF;
    switch (temp_a1) {                              /* irregular */
    case 0xF0:
    case 0xE0:
    case 0xD0:
    case 0xC0:
    case 0xB0:
    case 0x70:
    case 0x30:
    case 0xA0:
    case 0x90:
    case 0x60:
    case 0x50:
        break;
    case 0x10:
        if ((*(u8 *)D_00533048) == 0x20) {
block_29:
            var_v0 = 1;
        }
        break;
    case 0x20:
        if ((*(u8 *)D_00533048) == 0x10) {
            goto block_29;
        }
        break;
    case 0x40:
        if ((*(u8 *)D_00533048) == 0x80) {
            goto block_29;
        }
        break;
    case 0x80:
        if ((*(u8 *)D_00533048) == 0x40) {
            goto block_29;
        }
        break;
    }
    if ((*(u8 *)D_00533048) == 0xFF) {
        var_v0 = 1;
    }
    return var_v0;
}
