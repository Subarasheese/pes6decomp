/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B28900(void);
extern char D_00B7FCE0[];
extern char D_00B7FCE4[];
extern char D_00B7FCE8[];
extern char D_00B7FCEC[];
extern char D_00B7FCF0[];
extern char D_00B7FCF4[];
extern char D_00B7FCF8[];
extern char D_00B7FCFC[];
extern char D_00B7FD00[];
extern char D_00B7FD04[];
extern char D_00B7FD08[];
extern char D_00B7FD0C[];

void func_00B28800(void) {
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

    sp30 = (*(s32 *)D_00B7FCE0);
    sp34 = (*(f32 *)D_00B7FCE4);
    sp38 = (*(f32 *)D_00B7FCE8);
    sp3C = (*(f32 *)D_00B7FCEC);
    sp40 = (*(f32 *)D_00B7FCF0);
    sp44 = (*(f32 *)D_00B7FCF4);
    sp48 = (*(f32 *)D_00B7FCF8);
    sp4C = (*(f32 *)D_00B7FCFC);
    sp50 = (*(f32 *)D_00B7FD00);
    sp54 = (*(f32 *)D_00B7FD04);
    sp58 = (*(f32 *)D_00B7FD08);
    sp5C = (*(f32 *)D_00B7FD0C);
    if (func_00B28900() != 0) {
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
