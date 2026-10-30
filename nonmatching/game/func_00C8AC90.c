/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B9250(s32, M2C_UNK *, s16);         /* extern */
M2C_UNK func_00C8C0A0(s16);                         /* extern */
extern char D_00CCD07C[];
extern char D_00CCD07E[];
extern char D_00CCD080[];
extern char D_00CCD088[];
extern M2C_UNK func_00C8AD70;

void func_00C8AC90(s32 arg0) {
    s16 var_a1;
    s16 var_s0;
    s32 var_v1;

    var_s0 = (*(s16 *)D_00CCD07E);
    if (arg0 == 1) {
        var_a1 = 0x100;
    } else {
        var_a1 = (*(s16 *)D_00CCD080);
    }
    var_v1 = arg0 == 1;
    if (var_s0 < (*(s16 *)D_00CCD07C)) {
        var_s0 += var_a1;
        if ((*(s16 *)D_00CCD07C) < var_s0) {
            var_s0 = (*(s16 *)D_00CCD07C);
            var_v1 = 1;
        } else {
            goto block_9;
        }
    } else if ((*(s16 *)D_00CCD07C) < var_s0) {
        var_s0 -= var_a1;
        if (var_s0 < (*(s16 *)D_00CCD07C)) {
            var_s0 = (*(s16 *)D_00CCD07C);
        }
block_9:
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        (*(s16 *)D_00CCD07E) = var_s0;
        func_001B9250((*(s32 *)D_00CCD088), &func_00C8AD70, (*(s16 *)D_00CCD07C));
        func_00C8C0A0(var_s0);
    }
}
