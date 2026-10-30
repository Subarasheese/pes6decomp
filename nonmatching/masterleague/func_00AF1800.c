/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00AF7970(void);
extern char D_00B798B0[];
extern char D_00B798B4[];
extern char D_00B798B8[];
extern char D_00B798BC[];
extern char D_00B798C0[];
extern char D_00B798C4[];
extern char D_00B798C8[];
extern char D_00B798CC[];
extern char D_00B798D0[];
extern char D_00B798D4[];
extern char D_00B798D8[];
extern char D_00B798DC[];

void func_00AF1800(void) {
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

    sp30 = (*(s32 *)D_00B798B0);
    sp34 = (*(f32 *)D_00B798B4);
    sp38 = (*(f32 *)D_00B798B8);
    sp3C = (*(f32 *)D_00B798BC);
    sp40 = (*(f32 *)D_00B798C0);
    sp44 = (*(f32 *)D_00B798C4);
    sp48 = (*(f32 *)D_00B798C8);
    sp4C = (*(f32 *)D_00B798CC);
    sp50 = (*(f32 *)D_00B798D0);
    sp54 = (*(f32 *)D_00B798D4);
    sp58 = (*(f32 *)D_00B798D8);
    sp5C = (*(f32 *)D_00B798DC);
    if (func_00AF7970() != 0) {
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
