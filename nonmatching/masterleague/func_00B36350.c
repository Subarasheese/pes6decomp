/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B36410(void);
extern char D_00B7FE80[];
extern char D_00B7FE84[];
extern char D_00B7FE88[];

void func_00B36350(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    s32 *var_s0;
    s32 var_s1;

    sp30 = (*(s32 *)D_00B7FE80);
    sp34 = (*(f32 *)D_00B7FE84);
    sp38 = (*(f32 *)D_00B7FE88);
    if (func_00B36410() != 0) {
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 == 0);
    }
}
