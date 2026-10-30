/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B14800(void);
extern void func_001BC300(void);
extern char D_00B32BA0[];
extern char D_00B32BA4[];
extern char D_00B32BA8[];
extern char D_00B32BAC[];
extern char D_00B32BB0[];
extern char D_00B32BB4[];
extern char D_00B32BB8[];
extern char D_00B32BBC[];
extern char D_00B32BC0[];

void func_00B12ED0(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    s32 *var_s0;
    u32 var_s1;

    sp30 = (*(s32 *)D_00B32BA0);
    sp34 = (*(f32 *)D_00B32BA4);
    sp38 = (*(f32 *)D_00B32BA8);
    sp3C = (*(f32 *)D_00B32BAC);
    sp40 = (*(f32 *)D_00B32BB0);
    sp44 = (*(f32 *)D_00B32BB4);
    sp48 = (*(f32 *)D_00B32BB8);
    sp4C = (*(f32 *)D_00B32BBC);
    sp50 = (*(f32 *)D_00B32BC0);
    if (func_00B14800() != 0) {
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < 3U);
    }
}
