/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3C80(void *, f32);
extern s32 func_001F2410(void *);
extern void func_001EF900(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern void * func_001F2050(void *);
extern void func_001F2290(void *, s32);
extern void * func_001F1F10(void);
extern void func_001F1860(void *, s32);
extern void * func_001E6E10(s32);
extern void * func_001F2330(s32);
M2C_UNK func_001EEAC0(s32, void *);                 /* extern */
void *func_001F1A20(void *, M2C_UNK, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_001F3D80(void *, f32 *, M2C_UNK);      /* extern */
extern char D_00CC00E8[];

void func_00B97F30(void *arg0) {
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    s32 spB8;
    s32 spBC;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s6;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_5;
    void *temp_v0_6;

    spA0 = M2C_FIELD(arg0, f32 *, 0x28);
    spA4 = M2C_FIELD(arg0, f32 *, 0x2C);
    spA8 = M2C_FIELD(arg0, f32 *, 0x30);
    spAC = M2C_FIELD(arg0, f32 *, 0x34);
    temp_v0 = func_001F1F10();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x1C4) = 4;
        func_001F3C80(temp_v0, M2C_FIELD(arg0, f32 *, 0x38));
        func_001F3D80(temp_v0, &spA0, 0);
        func_001F3D10((s32) temp_v0, M2C_FIELD(arg0, u8 *, 0x3D));
        spA0 = 0.0f;
        spA4 = 0.0f;
        temp_v0_2 = func_001F2050(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4) = temp_v0_2;
        func_001F3C80(temp_v0_2, M2C_FIELD(arg0, f32 *, 0x38));
        func_001F3D80(temp_v0_2, &spA0, 0);
        func_001F3D10((s32) temp_v0_2, 1U);
        temp_v0_3 = func_001F2330((s32) temp_v0_2);
        func_001F3D10(temp_v0_3, 1U);
        func_001F2290((void *) temp_v0_3, 1);
        temp_s2 = func_001E6E10(0x4E96);
        var_s6 = 0;
        var_s1 = 0;
        do {
            var_s4 = 0;
            var_s0 = 0;
loop_3:
            temp_v0_4 = func_001F2410((void *) temp_v0_3);
            M2C_FIELD((var_s1 + M2C_FIELD(arg0, void **, 0) + var_s0), s32 *, 0x38) = temp_v0_4;
            if (temp_s2 != NULL) {
                func_001EEAC0(temp_v0_4, temp_s2);
            }
            func_001EF900((void *) temp_v0_4, 0);
            var_s4 += 1;
            var_s0 += 4;
            if (var_s4 < 9) {
                goto loop_3;
            }
            var_s6 += 1;
            var_s1 += 0x24;
        } while (var_s6 < 0xB);
        spA0 += -15.0f;
        spA4 += -8.0f;
        temp_v0_5 = func_001F2050(temp_v0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8) = temp_v0_5;
        func_001F3C80(temp_v0_5, M2C_FIELD(arg0, f32 *, 0x38));
        func_001F3D80(temp_v0_5, &spA0, 0);
        func_001F3D10((s32) temp_v0_5, 1U);
        spB8 = 0;
        var_s0_2 = 0;
        spBC = 0;
        var_s2 = 0;
        do {
            temp_v0_6 = func_001F1A20(temp_v0_5, 0x21, &spB8, ((void *)D_00CC00E8));
            M2C_FIELD((M2C_FIELD(arg0, void **, 0) + var_s2), void **, 0xC) = temp_v0_6;
            func_001F1860(temp_v0_6, 1);
            func_001F3D10((s32) temp_v0_6, 0U);
            var_s0_2 += 1;
            var_s2 += 4;
        } while (var_s0_2 < 0xB);
    }
}
