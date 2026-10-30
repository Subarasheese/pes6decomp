/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern char D_00B85F70[];
extern char D_00B85F74[];
extern char D_00B85F78[];
extern char D_00B85F7C[];
extern char D_00B85F80[];
extern char D_00B85F84[];
extern char D_00B85F88[];
extern char D_00B85F8C[];
extern char D_00B85F90[];
extern char D_00B85F94[];
extern char D_00B85F98[];
extern char D_00B85F9C[];

void func_00B6A3F0(void) {
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

    sp30 = (*(s32 *)D_00B85F70);
    sp34 = (*(f32 *)D_00B85F74);
    sp38 = (*(f32 *)D_00B85F78);
    sp3C = (*(f32 *)D_00B85F7C);
    sp40 = (*(f32 *)D_00B85F80);
    sp44 = (*(f32 *)D_00B85F84);
    sp48 = (*(f32 *)D_00B85F88);
    sp4C = (*(f32 *)D_00B85F8C);
    sp50 = (*(f32 *)D_00B85F90);
    sp54 = (*(f32 *)D_00B85F94);
    sp58 = (*(f32 *)D_00B85F98);
    sp5C = (*(f32 *)D_00B85F9C);
    if (func_00B695D0() != 0) {
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
