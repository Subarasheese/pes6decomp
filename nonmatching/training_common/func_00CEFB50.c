/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F04F0(s32, void *);
extern s32 func_0021E000(u32);
extern s32 func_0021DF90(s32);
M2C_UNK func_001DA550(s32, f32 *);                  /* extern */
M2C_UNK func_001E75A0(s32, f32 *);                  /* extern */
extern char D_00CF9EF0[];
extern char D_00CF9F00[];
extern char D_00CF9F08[];
extern char D_00CF9F18[];
extern char D_00CF9F1C[];
extern char D_00CF9F20[];
extern char D_00CF9F24[];

s32 func_00CEFB50(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 *var_s0;
    s32 *var_s1_3;
    u32 *var_s1_2;
    u32 var_s0_2;
    u32 var_s0_3;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF9EF0);
    sp38 = (*(f32 *)D_00CF9F18);
    sp3C = (*(f32 *)D_00CF9F1C);
    sp30 = (*(f32 *)D_00CF9F20);
    sp34 = (*(f32 *)D_00CF9F24);
    do {
        func_001F04F0(func_0021DF90(*var_s0), &sp38);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CF9F00);
    do {
        func_001E75A0(func_0021E000(*var_s1_2), &sp38);
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 2U);
    var_s0_3 = 0;
    var_s1_3 = ((void *)D_00CF9F08);
    do {
        func_001DA550(*var_s1_3, &sp30);
        var_s0_3 += 1;
        var_s1_3 += 4;
    } while (var_s0_3 < 2U);
    return 1;
}
