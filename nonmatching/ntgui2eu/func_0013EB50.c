/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005BB9F8[];
extern M2C_UNK func_0013EAD0;

void func_0013EB50(s32 arg0) {
    s32 var_s0;

    var_s0 = 5;
    do {
        var_s0 -= 1;
        func_0019B140(M2C_FIELD(((void *)D_005BB9F8), s32 *, 0x54C));
        func_0019B160(M2C_FIELD(((void *)D_005BB9F8), s32 *, 0x548));
    } while (var_s0 != 0);
    if (arg0 < 3) {
        if (arg0 >= 0) {
            func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x73), &func_0013EAD0, (*(s32 *)D_005B3744));
        }
    }
}
