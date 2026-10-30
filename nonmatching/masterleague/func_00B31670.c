/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B31770(void);
extern char D_00B7FE50[];
extern char D_00B7FE54[];
extern char D_00B7FE58[];
extern char D_00B7FE5C[];
extern char D_00B7FE60[];
extern char D_00B7FE64[];
extern char D_00B7FE68[];
extern char D_00B7FE6C[];
extern char D_00B7FE70[];
extern char D_00B7FE74[];
extern char D_00B7FE78[];
extern char D_00B7FE7C[];

void func_00B31670(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 *var_s0;
    u32 var_s1;

    sp30 = (*(s32 *)D_00B7FE50);
    sp34 = (*(f32 *)D_00B7FE54);
    sp38 = (*(f32 *)D_00B7FE58);
    sp3C = (*(f32 *)D_00B7FE5C);
    sp40 = (*(f32 *)D_00B7FE60);
    sp44 = (*(f32 *)D_00B7FE64);
    sp48 = (*(f32 *)D_00B7FE68);
    sp4C = (*(f32 *)D_00B7FE6C);
    sp50 = (*(f32 *)D_00B7FE70);
    sp54 = (*(f32 *)D_00B7FE74);
    sp58 = (*(f32 *)D_00B7FE78);
    sp5C = (*(f32 *)D_00B7FE7C);
    if (func_00B31770() != 0) {
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < 4U);
    }
}
