/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B76A10(void);
extern char D_00B86530[];
extern char D_00B86534[];
extern char D_00B86538[];
extern char D_00B8653C[];
extern char D_00B86540[];
extern char D_00B86544[];
extern char D_00B86548[];
extern char D_00B8654C[];
extern char D_00B86550[];
extern char D_00B86554[];
extern char D_00B86558[];
extern char D_00B8655C[];

void func_00B76020(void) {
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

    sp30 = (*(s32 *)D_00B86530);
    sp34 = (*(f32 *)D_00B86534);
    sp38 = (*(f32 *)D_00B86538);
    sp3C = (*(f32 *)D_00B8653C);
    sp40 = (*(f32 *)D_00B86540);
    sp44 = (*(f32 *)D_00B86544);
    sp48 = (*(f32 *)D_00B86548);
    sp4C = (*(f32 *)D_00B8654C);
    sp50 = (*(f32 *)D_00B86550);
    sp54 = (*(f32 *)D_00B86554);
    sp58 = (*(f32 *)D_00B86558);
    sp5C = (*(f32 *)D_00B8655C);
    if (func_00B76A10() != 0) {
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
