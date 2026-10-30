/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern u32 func_001CDA50(s32);
s32 func_0020C6E0(s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0020CDC0();                            /* extern */
extern char D_003A8EB0[];
extern char D_003D4240[];
extern char D_00537AE0[];
extern char D_00537AE8[];

void func_0020CC80(void) {
    s32 sp40;
    s32 *temp_s0;
    s32 *var_s0;
    s32 *var_s1;
    s32 var_s2;

    func_0020CDC0();
    temp_s0 = ((void *)D_00537AE0) + (0 * 4);
    if (*temp_s0 == 0) {
        *temp_s0 = func_0020C6E0(((void *)D_003A8EB0), 0xA, 0x21, 0, 0, 0, 0);
    }
    if (M2C_FIELD(((void *)D_00537AE0), s32 *, 4) == 0) {
        M2C_FIELD(((void *)D_00537AE0), s32 *, 4) = func_0020C6E0(((void *)D_003A8EB0), 0xA, 0x18, 0, 0, 0, 0);
    }
    if (func_001CDA50(1) != 5) {
        var_s1 = (s32 *)0x3D4250;
    } else {
        var_s1 = ((void *)D_003D4240);
    }
    var_s2 = 0;
    var_s0 = &sp40;
    do {
        *var_s0 = func_001F08B0(*var_s1);
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 3);
    (*(s32 *)D_00537AE8) = func_0020C6E0(&sp40, 3, 0x17, 0, 0, 0, 0);
}
