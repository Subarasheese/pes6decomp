/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017F9A0(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32 *); /* extern */
M2C_UNK func_001B3E10(s32);                         /* extern */
extern char D_003B43F0[];
extern s32 D_003E98F4;
extern M2C_UNK func_001B3CD0;

void func_001B3C20(s32 arg0) {
    s32 sp20;
    s32 sp2C;
    s32 sp30;
    s32 *var_v0;
    s32 var_s0;
    s32 var_v1;

    if (D_003E98F4 == 0) {
        var_v1 = 0x14;
        var_v0 = &sp20;
        do {
            M2C_FIELD(var_v0, s8 *, 0) = 0;
            var_v1 -= 5;
            M2C_FIELD(var_v0, s8 *, 1) = 0;
            M2C_FIELD(var_v0, s8 *, 2) = 0;
            M2C_FIELD(var_v0, s8 *, 3) = 0;
            M2C_FIELD(var_v0, s8 *, 4) = 0;
            var_v0 += 5;
        } while (var_v1 > 0);
        sp20 = 1;
        sp2C = arg0;
        sp30 = arg0;
        func_0017F9A0((*(s32 *)D_003B43F0), &func_001B3CD0, 0, 0, &sp20);
    } else {
        var_s0 = 0;
        do {
            func_001B3E10(var_s0);
            var_s0 += 1;
        } while (var_s0 < 9);
    }
}
