/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F27D0(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern void func_001F3C80(void *, f32);
s32 func_001F1F10();                                /* extern */
void *func_001F2050(s32);                           /* extern */
M2C_UNK func_001F2530(s32, M2C_UNK, s64 *);         /* extern */
M2C_UNK func_001F26F0(s32, f32 *);                  /* extern */
s32 func_001F2880(void *);                          /* extern */
M2C_UNK func_001F3D80(s32, f32 *, M2C_UNK);         /* extern */
extern char D_003A9BB0[];
extern char D_003A9BB4[];
extern char D_003A9BB8[];
extern char D_003A9BBC[];
extern f32 D_003E7500;
extern void *D_003E9A70;
extern s32 D_003E9A74;
extern s32 D_003E9A78;

void func_0023D6A0(s64 arg0, s64 arg1, f32 fparg0, f32 fparg1, f32 fparg2) {
    s64 sp20;
    s64 sp28;
    f32 sp30;
    f32 sp34;
    M2C_UNK32 sp38;
    M2C_UNK32 sp3C;
    f32 sp4C;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a1;
    void *temp_v0_2;

    sp20 = arg0;
    sp28 = arg1;
    sp30 = (*(f32 *)D_003A9BB0);
    sp34 = (*(f32 *)D_003A9BB4);
    sp38 = (*(M2C_UNK32 *)D_003A9BB8);
    sp3C = (*(M2C_UNK32 *)D_003A9BBC);
    temp_v0 = func_001F1F10();
    D_003E9A78 = temp_v0;
    func_001F3D10(temp_v0, 1U);
    func_001F3C80((void *) D_003E9A78, 0.0f);
    func_001F3D80(D_003E9A78, &sp30, 0);
    temp_v0_2 = func_001F2050(D_003E9A78);
    D_003E9A70 = temp_v0_2;
    func_001F3C80(temp_v0_2, fparg2);
    func_001F3D10((s32) D_003E9A70, 1U);
    temp_v0_3 = func_001F2880(D_003E9A70);
    D_003E9A74 = temp_v0_3;
    if (!(fparg2 >= 2.1474836e9f)) {
        var_a1 = (s32) fparg2;
    } else {
        var_a1 = (s32) (fparg2 - 2.1474836e9f) | 0x80000000;
    }
    func_001F27D0((void *) ((s64) ((s64) temp_v0_3 << 0x20) >> 0x20), var_a1 & 0xFF);
    func_001F3D10(D_003E9A74, 1U);
    sp38 = 0;
    sp30 = fparg0;
    sp3C = 0;
    sp34 = fparg1;
    func_001F3D80(D_003E9A74, &sp30, 0);
    func_001F2530(D_003E9A74, 0, &sp20);
    func_001F2530(D_003E9A74, 1, &sp28);
    sp4C = D_003E7500;
    func_001F26F0(D_003E9A74, &sp4C);
}
