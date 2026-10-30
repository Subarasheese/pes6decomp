/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC360(s32);                         /* extern */
M2C_UNK func_001F87E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002DED00(s32);                         /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, s32, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00858790(s16);                             /* extern */
s32 func_0087CE10();                                /* extern */
s32 func_00880BF0();                                /* extern */
M2C_UNK func_008FC480();                            /* extern */
extern char D_003AE983[];
extern char D_003AE988[];
extern char D_00591DB5[];
extern char D_008B2400[];
extern char D_008B2430[];
extern char D_008B2434[];
extern char D_008B2435[];

s32 func_0087ED10(void) {
    M2C_UNK *var_s0;
    s32 var_s0_2;
    s32 var_s1;

    if (func_00880BF0() == 0) {
        return 0;
    }
    if ((*(u8 *)D_008B2434) == 0) {
        if (func_00858790(*func_008472D0()) != 3) {
            return 0;
        }
        func_002DED00((*(s32 *)D_008B2430));
        goto block_6;
    }
block_6:
    if (func_0087CE10() == 0) {
        return 0;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_008B2400);
    do {
        func_001BC360(M2C_FIELD(var_s0, s32 *, 0x18));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 6);
    func_001BC2B0();
    (*(s8 *)D_00591DB5) = 0;
    func_008FC480();
    func_001F87E0(1, 0x10);
    var_s0_2 = 1;
    (*(s32 *)D_003AE988) = 0;
    (*(s8 *)D_008B2435) = 1;
    if ((*(s8 *)D_003AE983) == 1) {
        var_s0_2 = 2;
    }
    func_00853B50(1, 5, var_s0_2 & 0xFF, 0, *func_008472D0(), 0, 0, 0);
    (*(s8 *)D_003AE983) = 0;
    return 1;
}
