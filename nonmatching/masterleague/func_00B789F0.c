/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B77B10(void);
extern char D_00B86590[];
extern char D_00B86594[];
extern char D_00B86598[];
extern char D_00B8659C[];
extern char D_00B865A0[];
extern char D_00B865A4[];
extern char D_00B865A8[];
extern char D_00B865AC[];
extern char D_00B865B0[];
extern char D_00B865B4[];
extern char D_00B865B8[];
extern char D_00B865BC[];

void func_00B789F0(void) {
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

    sp30 = (*(s32 *)D_00B86590);
    sp34 = (*(f32 *)D_00B86594);
    sp38 = (*(f32 *)D_00B86598);
    sp3C = (*(f32 *)D_00B8659C);
    sp40 = (*(f32 *)D_00B865A0);
    sp44 = (*(f32 *)D_00B865A4);
    sp48 = (*(f32 *)D_00B865A8);
    sp4C = (*(f32 *)D_00B865AC);
    sp50 = (*(f32 *)D_00B865B0);
    sp54 = (*(f32 *)D_00B865B4);
    sp58 = (*(f32 *)D_00B865B8);
    sp5C = (*(f32 *)D_00B865BC);
    if (func_00B77B10() != 0) {
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
