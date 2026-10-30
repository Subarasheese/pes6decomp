/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001E6E10(s32);                             /* extern */
s32 func_002307F0();                                /* extern */
extern char D_00591BBA[];
extern char D_0061ED60[];

s32 func_003663E0(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    if (func_002307F0() & 0xFF) {
        return 0;
    }
    if ((*(u8 *)D_00591BBA) == 0) {
        return 0;
    }
    var_s2 = 0;
    var_s0 = ((void *)D_0061ED60);
    do {
        if ((M2C_FIELD(var_s0, u8 *, 4) & 1) && (arg0 == M2C_FIELD(var_s0, s32 *, 8))) {
            var_s1 = func_001E6E10(M2C_FIELD(var_s0, s32 *, 0x10));
        }
        var_s2 += 1;
        var_s0 += 0x10;
    } while (var_s2 < 0x14);
    return var_s1;
}
