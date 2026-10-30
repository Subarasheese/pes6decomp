/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B10D20(void);
extern void func_001BC300(void);
extern char D_00B31C60[];
extern char D_00B31C64[];
extern char D_00B31C68[];
extern char D_00B31C6C[];
extern char D_00B31C70[];
extern char D_00B31C74[];
extern char D_00B31C78[];
extern char D_00B31C7C[];
extern char D_00B31C80[];
extern char D_00B31C84[];
extern char D_00B31C88[];
extern char D_00B31C8C[];

void func_00AEC530(void) {
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

    sp30 = (*(s32 *)D_00B31C60);
    sp34 = (*(f32 *)D_00B31C64);
    sp38 = (*(f32 *)D_00B31C68);
    sp3C = (*(f32 *)D_00B31C6C);
    sp40 = (*(f32 *)D_00B31C70);
    sp44 = (*(f32 *)D_00B31C74);
    sp48 = (*(f32 *)D_00B31C78);
    sp4C = (*(f32 *)D_00B31C7C);
    sp50 = (*(f32 *)D_00B31C80);
    sp54 = (*(f32 *)D_00B31C84);
    sp58 = (*(f32 *)D_00B31C88);
    sp5C = (*(f32 *)D_00B31C8C);
    if (func_00B10D20() != 0) {
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
