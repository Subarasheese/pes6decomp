/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern u32 func_009A84E0(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern char D_009C0F10[];
extern char D_009C0F14[];
extern char D_009C0F18[];
extern char D_009C0F1C[];
extern char D_009C0F20[];
extern char D_009C0F24[];
extern char D_009C0F28[];
extern char D_009C0F2C[];
extern char D_009C0F30[];
extern char D_009C0F34[];
extern char D_009C0F38[];
extern char D_009C0F3C[];

void func_009A5E90(void) {
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

    sp30 = (*(s32 *)D_009C0F10);
    sp34 = (*(f32 *)D_009C0F14);
    sp38 = (*(f32 *)D_009C0F18);
    sp3C = (*(f32 *)D_009C0F1C);
    sp40 = (*(f32 *)D_009C0F20);
    sp44 = (*(f32 *)D_009C0F24);
    sp48 = (*(f32 *)D_009C0F28);
    sp4C = (*(f32 *)D_009C0F2C);
    sp50 = (*(f32 *)D_009C0F30);
    sp54 = (*(f32 *)D_009C0F34);
    sp58 = (*(f32 *)D_009C0F38);
    sp5C = (*(f32 *)D_009C0F3C);
    if (func_009A84E0() != 0) {
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
