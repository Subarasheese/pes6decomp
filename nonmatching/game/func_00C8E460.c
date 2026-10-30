/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F1F10(void);
extern void func_001F13D0(void *);
extern void func_001F1390(void *);
extern int func_001CDAA0(void);
extern f32 func_001D79A0(void *, u16);
extern void * func_001F1490(void *);
extern void func_001F3C80(void *, f32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001F3D80(void *, s32 *, M2C_UNK);      /* extern */
M2C_UNK func_00C8E5C0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_00C8EFA0(void *);                      /* extern */
extern char D_00CCD570[];
extern char D_00CCD6FC[];
extern void *D_00CCD888;
extern void *D_00CCD89C;

void func_00C8E460(void) {
    s32 sp30;
    f32 sp34;
    s32 sp38;
    f32 sp3C;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (D_00CCD888 == NULL) {
        sp30 = 0xC3800000;
        if (func_001CDAA0() != 0) {
            var_v0 = 0x200;
        } else {
            var_v0 = 0x1C0;
        }
        temp_v1 = -var_v0;
        var_v0_2 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 1) >> 1;
        }
        sp38 = 0x44000000;
        sp34 = (f32) var_v0_2;
        if (func_001CDAA0() != 0) {
            var_v0_3 = 0x200;
        } else {
            var_v0_3 = 0x1C0;
        }
        sp3C = (f32) var_v0_3;
        temp_v0 = func_001F1F10();
        D_00CCD888 = temp_v0;
        func_001F3D80(temp_v0, &sp30, 0);
        func_001F3D10((s32) temp_v0, 1U);
        temp_v0_2 = func_001F1490(temp_v0);
        func_001F13D0(temp_v0_2);
        func_001F3C80(temp_v0_2, func_001D79A0(D_00CCD89C, 0U));
        func_00C8EFA0(temp_v0);
        func_00C8E5C0(((void *)D_00CCD570), temp_v0);
        func_00C8E5C0(((void *)D_00CCD6FC), temp_v0);
        temp_v0_3 = func_001F1490(temp_v0);
        func_001F1390(temp_v0_3);
        func_001F3C80(temp_v0_3, func_001D79A0(D_00CCD89C, 1U));
    }
}
