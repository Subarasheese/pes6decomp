/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A00(void *);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern void func_001BC300(void);
extern u32 func_00B06560(void);
M2C_UNK func_001B79C0();                            /* extern */
s32 func_002F3850(void *);                          /* extern */
extern char D_00B7F730[];
extern char D_00B7F734[];
extern char D_00B7F738[];
extern char D_00B7F73C[];
extern char D_00B7F740[];
extern char D_00B7F744[];

void func_00B06130(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s32 *var_s0;
    s32 temp_v0_2;
    u32 temp_v0;
    u32 var_s1;

    sp30 = (*(s32 *)D_00B7F730);
    sp34 = (*(f32 *)D_00B7F734);
    sp38 = (*(f32 *)D_00B7F738);
    sp3C = (*(f32 *)D_00B7F73C);
    sp40 = (*(f32 *)D_00B7F740);
    sp44 = (*(f32 *)D_00B7F744);
    temp_v0 = func_00B06560();
    if ((temp_v0 != 0) && ((temp_v0_2 = func_002F3850(M2C_FIELD(temp_v0, void **, 0x28)), (temp_v0_2 == 0)) || (temp_v0_2 == 4))) {
        func_002F3A00(M2C_FIELD(temp_v0, void **, 0x28));
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < 2U);
        func_001B79C0();
    }
}
