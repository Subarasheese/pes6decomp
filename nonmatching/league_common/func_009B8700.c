/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B84D0(void);
extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern char D_009C1260[];
extern char D_009C1264[];
extern char D_009C1268[];
extern char D_009C126C[];
extern char D_009C1270[];
extern char D_009C1274[];
extern char D_009C1278[];
extern char D_009C127C[];
extern char D_009C1280[];

void func_009B8700(void) {
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

    sp30 = (*(s32 *)D_009C1260);
    sp34 = (*(f32 *)D_009C1264);
    sp38 = (*(f32 *)D_009C1268);
    sp3C = (*(f32 *)D_009C126C);
    sp40 = (*(f32 *)D_009C1270);
    sp44 = (*(f32 *)D_009C1274);
    sp48 = (*(f32 *)D_009C1278);
    sp4C = (*(f32 *)D_009C127C);
    sp50 = (*(f32 *)D_009C1280);
    if (func_009B84D0() != 0) {
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
