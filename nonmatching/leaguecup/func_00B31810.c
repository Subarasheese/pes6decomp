/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B30A60(void);
extern void func_001BC300(void);
extern char D_00B33060[];
extern char D_00B33064[];
extern char D_00B33068[];
extern char D_00B3306C[];
extern char D_00B33070[];
extern char D_00B33074[];

void func_00B31810(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s32 *var_s0;
    u32 var_s1;

    sp30 = (*(s32 *)D_00B33060);
    sp34 = (*(f32 *)D_00B33064);
    sp38 = (*(f32 *)D_00B33068);
    sp3C = (*(f32 *)D_00B3306C);
    sp40 = (*(f32 *)D_00B33070);
    sp44 = (*(f32 *)D_00B33074);
    if (func_00B30A60() != 0) {
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < 2U);
    }
}
