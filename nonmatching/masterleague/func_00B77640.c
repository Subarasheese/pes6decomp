/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B772F0(void);
extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern char D_00B86560[];
extern char D_00B86564[];
extern char D_00B86568[];
extern char D_00B8656C[];
extern char D_00B86570[];
extern char D_00B86574[];
extern char D_00B86578[];
extern char D_00B8657C[];
extern char D_00B86580[];
extern char D_00B86584[];
extern char D_00B86588[];
extern char D_00B8658C[];

void func_00B77640(void) {
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

    sp30 = (*(s32 *)D_00B86560);
    sp34 = (*(f32 *)D_00B86564);
    sp38 = (*(f32 *)D_00B86568);
    sp3C = (*(f32 *)D_00B8656C);
    sp40 = (*(f32 *)D_00B86570);
    sp44 = (*(f32 *)D_00B86574);
    sp48 = (*(f32 *)D_00B86578);
    sp4C = (*(f32 *)D_00B8657C);
    sp50 = (*(f32 *)D_00B86580);
    sp54 = (*(f32 *)D_00B86584);
    sp58 = (*(f32 *)D_00B86588);
    sp5C = (*(f32 *)D_00B8658C);
    if (func_00B772F0() != 0) {
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
