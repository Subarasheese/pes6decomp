/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003B71A0[];
extern char D_003B71A4[];
extern char D_003B71A8[];
extern char D_003B71AC[];
extern char D_003B71B0[];
extern char D_003B71B4[];
extern char D_003B71B8[];
extern char D_003B71BC[];
extern char D_003B71C0[];
extern char D_003B71C4[];
extern char D_003B71C8[];
extern char D_003B71CC[];
extern char D_005EFDC0[];
extern char D_005EFDEC[];
extern char D_005EFDF0[];
extern char D_005EFDF1[];
extern M2C_UNK func_0030C1C0;
extern M2C_UNK func_0030C1D0;

s32 func_00309600(s32 arg0) {
    M2C_UNK32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 *var_v1;
    s32 var_a1;

    func_001C48E8(((void *)D_005EFDC0), 0, 0x38);
    (*(s32 *)D_005EFDEC) = arg0;
    var_a1 = 1;
    M2C_FIELD(((void *)D_005EFDC0), s32 *, 0) = 0;
    if (1 < 4) {
        var_v1 = ((void *)D_005EFDC0) + (1 * 4);
        do {
            var_a1 += 1;
            *var_v1 = 0;
            var_v1 += 4;
        } while (var_a1 < 4);
    }
    sp20 = (*(M2C_UNK32 *)D_003B71A0);
    sp24 = (*(f32 *)D_003B71A4);
    sp28 = (*(f32 *)D_003B71A8);
    sp2C = (*(f32 *)D_003B71AC);
    sp30 = (*(f32 *)D_003B71B0);
    sp34 = (*(f32 *)D_003B71B4);
    sp38 = (*(f32 *)D_003B71B8);
    sp3C = (*(f32 *)D_003B71BC);
    sp40 = (*(f32 *)D_003B71C0);
    sp44 = (*(f32 *)D_003B71C4);
    M2C_FIELD(((void *)D_005EFDC0), M2C_UNK **, 0x28) = &func_0030C1C0;
    sp48 = (*(f32 *)D_003B71C8);
    sp4C = (*(f32 *)D_003B71CC);
    M2C_FIELD(((void *)D_005EFDC0), M2C_UNK32 *, 0x20) = sp20;
    if (M2C_FIELD(((void *)D_005EFDC0), s32 *, 0x34) == 0) {
        M2C_FIELD(((void *)D_005EFDC0), M2C_UNK **, 0x24) = &func_0030C1D0;
    }
    (*(s8 *)D_005EFDF1) = 0;
    (*(s8 *)D_005EFDF0) = 1;
    return 0;
}
