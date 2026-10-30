/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED880(void *, f32);
extern void func_001EDA30(void *, s32);
extern void func_001EDAE0(void *, s8);
extern void * func_001E6E10(s32);
extern void func_001B4B90(void *, s32);
extern s32 func_001DD3C0(s32);
extern void func_001E59F0(void *, s8);
extern void func_001DEF30(void *, s8);
extern void func_001DEF70(void *, f32);
extern void func_001DF4F0(void *, s8);
extern void func_001B4D20(void *);
extern void func_001ED840(void *, s8);
extern void func_001E5F20(void *);
extern void func_001B4B40(s32);
void *func_001B4D80(f32, f32);                      /* extern */
void *func_001DFA30(M2C_UNK, s32 *, M2C_UNK *);     /* extern */
void *func_001E6020();                              /* extern */
void *func_001EE0D0();                              /* extern */
M2C_UNK func_00C8ADF0();                            /* extern */
extern char D_00591DEE[];
extern char D_00CB4F40[];
extern char D_00CB4F50[];
extern void *D_00CCCE30;
extern void *D_00CCCE34;
extern void *D_00CCCE38;
extern void *D_00CCCE3C;
extern void *D_00CCCE40;
extern void *D_00CCCE44;
extern void *D_00CCCE48;
extern void *D_00CCD048;
extern void *D_00CCD054;
extern void *D_00CCD058;
extern void *D_00CCD05C;
extern void *D_00CCD070;
extern char D_00CCD074[];
extern char D_00CCD078[];
extern char D_00CCD07C[];
extern char D_00CCD07E[];
extern char D_00CCD080[];
extern void *D_00CCD4B0;

void func_00C89FE0(void) {
    s32 sp40;
    s32 sp44;
    M2C_UNK *var_s0;
    s32 *var_v1;
    s32 var_s2;
    s32 var_v0;
    void **var_s1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    var_s2 = 0;
    var_s1 = &D_00CCD4B0;
    var_s0 = ((void *)D_00CB4F40);
    do {
        temp_a0 = *var_s1;
        if (temp_a0 != NULL) {
            func_001B4D20(temp_a0);
        }
        temp_v0 = func_001B4D80(M2C_FIELD(var_s0, f32 *, 4), M2C_FIELD(var_s0, f32 *, 8));
        *var_s1 = temp_v0;
        func_001B4B90(temp_v0, M2C_FIELD(var_s0, s32 *, 0));
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0xC;
    } while (var_s2 == 0);
    if (D_00CCD070 != NULL) {
        func_001E5F20(D_00CCD070);
    }
    temp_v0_2 = func_001E6020();
    D_00CCD070 = temp_v0_2;
    func_001B4B40((s32) temp_v0_2);
    func_001E59F0(D_00CCD070, 3);
    (*(s32 *)D_00CCD078) = (s32) (*(u16 *)D_00591DEE);
    temp_v0_3 = func_001EE0D0();
    D_00CCCE30 = temp_v0_3;
    func_001ED880(temp_v0_3, 4250.0f);
    func_001EDA30(temp_v0_3, 1);
    func_001ED840(temp_v0_3, 3);
    temp_v0_4 = func_001EE0D0();
    D_00CCCE34 = temp_v0_4;
    func_001ED880(temp_v0_4, 4251.0f);
    func_001EDA30(temp_v0_4, 1);
    func_001ED840(temp_v0_4, 3);
    D_00CCD054 = func_001E6E10(0x4EDF);
    D_00CCD058 = func_001E6E10(0x4EE0);
    D_00CCD05C = func_001E6E10(0x4EDF);
    if ((((void *)D_00CB4F50) != NULL) && (func_001DD3C0(0x17) != 0)) {
        var_v1 = &sp40;
        var_v0 = 0xC;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp40 = 0;
        sp44 = 0;
        temp_v0_5 = func_001DFA30(0x17, &sp40, ((void *)D_00CB4F50));
        D_00CCD048 = temp_v0_5;
        func_001DEF70(temp_v0_5, 3250.0f);
        func_001DEF30(D_00CCD048, 3);
    }
    func_001DF4F0(D_00CCD048, 0);
    temp_v0_6 = func_001EE0D0();
    D_00CCCE38 = temp_v0_6;
    func_001ED880(temp_v0_6, 4254.0f);
    func_001EDA30(temp_v0_6, 0);
    func_001ED840(temp_v0_6, 3);
    temp_v0_7 = func_001EE0D0();
    D_00CCCE3C = temp_v0_7;
    func_001ED880(temp_v0_7, 4250.0f);
    func_001EDA30(temp_v0_7, 4);
    func_001ED840(temp_v0_7, 3);
    temp_v0_8 = func_001EE0D0();
    D_00CCCE40 = temp_v0_8;
    func_001ED880(temp_v0_8, 4254.0f);
    func_001EDA30(temp_v0_8, 2);
    func_001ED840(temp_v0_8, 3);
    temp_v0_9 = func_001EE0D0();
    D_00CCCE44 = temp_v0_9;
    func_001ED880(temp_v0_9, 4250.0f);
    func_001EDA30(temp_v0_9, 3);
    func_001ED840(temp_v0_9, 3);
    func_001EDAE0(temp_v0_9, 0);
    temp_v0_10 = func_001EE0D0();
    D_00CCCE48 = temp_v0_10;
    func_001ED880(temp_v0_10, 4250.0f);
    func_001EDA30(temp_v0_10, 1);
    func_001ED840(temp_v0_10, 3);
    func_001EDAE0(temp_v0_10, 0);
    (*(s16 *)D_00CCD07E) = 0xFF;
    (*(s16 *)D_00CCD07C) = 0xFF;
    (*(s16 *)D_00CCD080) = 0x20;
    func_00C8ADF0();
    (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~1) | 1;
    (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~4) | 4;
}
