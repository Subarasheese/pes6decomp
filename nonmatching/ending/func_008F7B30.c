/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_008F84E0(s32);
s32 func_008FCDC0(M2C_UNK);                         /* extern */
s32 func_008FCE70(M2C_UNK);                         /* extern */
s32 func_008FCF00(M2C_UNK);                         /* extern */

void func_008F7B30(void) {
    s32 var_s0;

    var_s0 = 0 | 0x1E000;
    if ((var_s0 & 0x8000) && (func_008FCE70(0) == 0)) {
        var_s0 &= 0xFFFF7FFF;
    }
    if ((var_s0 & 0x10000) && (func_008FCDC0(0) == 0)) {
        var_s0 &= 0xFFFEFFFF;
    }
    if ((var_s0 & 0x2000) && (func_008FCF00(0) == 0)) {
        var_s0 &= ~0x2000;
    }
    func_008F84E0(var_s0);
}
