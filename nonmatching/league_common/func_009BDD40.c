/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001EDD00(void *);
extern void func_001EDA30(void *, s32);
extern int func_001CDAA0(void);
extern void func_001EEE60(void *, void *);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EF5B0(void *, f32 *, void *);       /* extern */
extern void *D_003EA9C4;
extern char D_0052B0B8[];
extern char D_0052B0C0[];

void func_009BDD40(void *arg0, void *arg1, s32 arg2, u32 arg3) {
    f32 sp60;
    f32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    s32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    s8 spAC;
    s8 spAD;
    s8 spAE;
    u8 spAF;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_s0;
    s32 var_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;

    temp_s1 = D_003EA9C4;
    if (temp_s1 != NULL) {
        temp_s0 = arg2 & 0xFF;
        temp_v1 = (temp_s0 * 0x10) + temp_s1;
        M2C_FIELD(temp_v1, f32 *, 0x98) = (f32) M2C_FIELD(arg0, f32 *, 0);
        temp_v0 = (temp_s0 * 0x24) + temp_s1;
        M2C_FIELD(temp_v1, f32 *, 0x9C) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(temp_v1, f32 *, 0xA0) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(temp_v1, f32 *, 0xA4) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(temp_v0, f32 *, 0x21C) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(temp_v0, f32 *, 0x220) = (f32) M2C_FIELD(arg0, f32 *, 4);
        if (func_001CDAA0() == 1) {
            temp_a1 = (temp_s0 * 0x24) + temp_s1;
            temp_f1 = M2C_FIELD(temp_a1, f32 *, 0x220) + 224.0f;
            M2C_FIELD(temp_a1, f32 *, 0x220) = temp_f1;
            temp_f1_2 = temp_f1 - (*(f32 *)D_0052B0B8);
            M2C_FIELD(temp_a1, f32 *, 0x220) = temp_f1_2;
            M2C_FIELD(temp_a1, f32 *, 0x220) = (f32) (temp_f1_2 * (*(f32 *)D_0052B0C0));
        }
        if (arg1 == NULL) {
            if (arg3 >= 2U) {
                if (arg3 != 2) {
                    var_a0 = (temp_s0 * 0x24) + temp_s1;
                    M2C_FIELD(var_a0, f32 *, 0x20C) = (f32) (M2C_FIELD(arg0, f32 *, 0) - 60.0f);
                    var_v0 = 0x43340000;
                    M2C_FIELD(var_a0, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 4) - 90.0f);
                    M2C_FIELD(var_a0, s32 *, 0x214) = 0x42F00000;
                } else {
                    var_a0 = (temp_s0 * 0x24) + temp_s1;
                    M2C_FIELD(var_a0, f32 *, 0x20C) = (f32) (M2C_FIELD(arg0, f32 *, 0) - 39.0f);
                    var_v0 = 0x42D00000;
                    M2C_FIELD(var_a0, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 4) - 52.0f);
                    M2C_FIELD(var_a0, s32 *, 0x214) = 0x429C0000;
                }
            } else {
                var_a0 = (temp_s0 * 0x24) + temp_s1;
                M2C_FIELD(var_a0, f32 *, 0x20C) = (f32) (M2C_FIELD(arg0, f32 *, 0) - 20.0f);
                var_v0 = 0x428C0000;
                M2C_FIELD(var_a0, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 4) - 35.0f);
                M2C_FIELD(var_a0, s32 *, 0x214) = 0x42200000;
            }
            M2C_FIELD(var_a0, s32 *, 0x218) = var_v0;
        } else {
            temp_v0_2 = (temp_s0 * 0x24) + temp_s1;
            M2C_FIELD(temp_v0_2, f32 *, 0x20C) = (f32) (M2C_FIELD(arg0, f32 *, 0) - (M2C_FIELD(arg1, f32 *, 8) / 2.0f));
            M2C_FIELD(temp_v0_2, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 4) - (M2C_FIELD(arg1, f32 *, 0xC) / 2.0f));
            M2C_FIELD(temp_v0_2, f32 *, 0x214) = (f32) M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(temp_v0_2, f32 *, 0x218) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        }
        M2C_FIELD(temp_s1, u32 *, 0x54C) = arg3;
        if (M2C_FIELD(temp_s1, void **, 0x554) == NULL) {
            temp_v0_3 = func_001EE0D0();
            M2C_FIELD(temp_s1, void **, 0x554) = temp_v0_3;
            func_001EDA30(temp_v0_3, 0);
        }
        temp_v1_2 = (temp_s0 * 4) + temp_s1;
        if (M2C_FIELD(temp_v1_2, void **, 0x558) == NULL) {
            M2C_FIELD(temp_v1_2, void **, 0x558) = func_001EDD00(M2C_FIELD(temp_s1, void **, 0x554));
            spAC = 0x80;
            spAF = 0xFF;
            spAE = 0x80;
            spAD = 0x80;
            M2C_FIELD(temp_s1, s8 *, 0x5B4) = 0xFF;
            func_001EEE60(M2C_FIELD(temp_v1_2, void **, 0x558), &spAC);
        }
        temp_a0 = (temp_s0 * 0x10) + temp_s1;
        temp_a2 = (temp_s0 * 0x24) + temp_s1;
        temp_v0_4 = (temp_s0 * 4) + temp_s1;
        temp_f1_3 = M2C_FIELD(temp_a0, f32 *, 0x98);
        temp_f0 = M2C_FIELD(temp_a2, f32 *, 0x214) / 2.0f;
        temp_f4 = temp_f1_3 - temp_f0;
        temp_f0_2 = temp_f1_3 + temp_f0;
        sp60 = temp_f4;
        temp_f3 = M2C_FIELD(temp_a0, f32 *, 0x9C);
        temp_f2 = M2C_FIELD(temp_a2, f32 *, 0x218) / 2.0f;
        sp68 = 0;
        sp6C = 0;
        sp78 = 0;
        sp7C = 0;
        sp88 = 0;
        sp8C = 0;
        sp98 = 0;
        sp9C = 0;
        temp_f1_4 = temp_f3 + temp_f2;
        sp70 = temp_f0_2;
        sp90 = temp_f0_2;
        temp_f0_3 = temp_f3 - temp_f2;
        sp80 = temp_f4;
        sp64 = temp_f1_4;
        sp74 = temp_f1_4;
        sp84 = temp_f0_3;
        sp94 = temp_f0_3;
        func_001EF5B0(M2C_FIELD(temp_v0_4, void **, 0x558), &sp60, temp_a2);
        func_001EF900(M2C_FIELD(temp_v0_4, void **, 0x558), 1);
        func_001EF900(M2C_FIELD(temp_v0_4, void **, 0x558), 0);
    }
}
