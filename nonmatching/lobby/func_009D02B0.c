/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00819460(M2C_UNK, s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64); /* extern */
extern f32 D_003E7384;
extern char D_00A7DDF8[];

void func_009D02B0(s32 arg0) {
    s32 var_a2;

    if ((*(s32 *)D_00A7DDF8) == 0) {
        var_a2 = 0;
    } else {
        var_a2 = (*(s32 *)D_00A7DDF8) + 0x9FC;
    }
    func_00819460(0, arg0, var_a2, var_a2, -1, 0, 1, 0, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 3, 0, 0, 0);
}
