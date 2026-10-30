/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B490A0(void);
extern char D_00B808D0[];
extern char D_00B808D4[];
extern char D_00B808D8[];
extern char D_00B808DC[];
extern char D_00B808E0[];
extern char D_00B808E4[];
extern char D_00B808E8[];
extern char D_00B808EC[];
extern char D_00B808F0[];
extern char D_00B808F4[];
extern char D_00B808F8[];
extern char D_00B808FC[];

void func_00B49E30(void) {
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

    sp30 = (*(s32 *)D_00B808D0);
    sp34 = (*(f32 *)D_00B808D4);
    sp38 = (*(f32 *)D_00B808D8);
    sp3C = (*(f32 *)D_00B808DC);
    sp40 = (*(f32 *)D_00B808E0);
    sp44 = (*(f32 *)D_00B808E4);
    sp48 = (*(f32 *)D_00B808E8);
    sp4C = (*(f32 *)D_00B808EC);
    sp50 = (*(f32 *)D_00B808F0);
    sp54 = (*(f32 *)D_00B808F4);
    sp58 = (*(f32 *)D_00B808F8);
    sp5C = (*(f32 *)D_00B808FC);
    if (func_00B490A0() != 0) {
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
