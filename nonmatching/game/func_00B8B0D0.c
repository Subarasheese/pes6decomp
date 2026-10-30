/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_002079F0(void *);
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B354C0(void *, f32, f32);            /* extern */
s32 func_00B36450();                                /* extern */
M2C_UNK func_00B8B600(void *);                      /* extern */
M2C_UNK func_00B9E5D0(void *);                      /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00C37590(u8, u16, f32, f32);           /* extern */
void **func_00C375E0(u8);                           /* extern */
s32 func_00C37640(u8, void *);                      /* extern */
s32 func_00C37700(u8, s32, void *);                 /* extern */
M2C_UNK func_00C37900(u8, s32, void *);             /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B8B0D0(void *arg0) {
    s32 temp_a1;
    u16 temp_s0_2;
    u16 temp_s2;
    u32 temp_s0;
    u8 temp_v1;
    void **temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    temp_a0_2 = M2C_FIELD(arg0, void **, 0);
    temp_s0 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    temp_s2 = func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70)) & 0xFFFF;
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
    if ((temp_v1 != 1) && (temp_v1 != 0)) {
        func_00B354C0(arg0, (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC));
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    func_00C37590(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), temp_s2, M2C_FIELD(temp_v1_2, f32 *, 0xE0), M2C_FIELD(temp_v1_2, f32 *, 0xE8));
    temp_a2 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = temp_s0 < 0x190000U;
    (*(f32 *)D_00CBCB00) = M2C_FIELD(temp_a2, f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = temp_s2;
    if (temp_a1 == 0) {
        temp_v1_3 = M2C_FIELD(arg0, void **, 4);
        if ((M2C_FIELD(temp_v1_3, s32 *, 0) & 0x20) && (temp_s0 < 0xE10000U)) {
            func_00BD3BA0(arg0, 5, 0);
        } else if ((func_00C37700(M2C_FIELD(temp_v1_3, u8 *, 0x54), temp_a1, temp_a2) == 2) && (func_00B36450() != 0) && (temp_s0 < 0x640000U) && (temp_a1_2 = M2C_FIELD(arg0, void **, 4), (M2C_FIELD(temp_a1_2, u8 *, 0x12) == 4))) {
            temp_s0_2 = M2C_FIELD(*temp_s1, u16 *, 0x10);
            temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            if (M2C_FIELD(temp_a0_3, u8 *, 0x2D) != (func_00C37640(M2C_FIELD(temp_a1_2, u8 *, 0x54), temp_a1_2) & 0xFF)) {

            }
            if (func_002079F0(temp_a0_3) != 0) {
                func_00B8B600(arg0);
                (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
                func_00B364D0(2U);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xCF;
            }
        }
    } else {
        func_00C37900(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), temp_a1, temp_a2);
        func_00B9E5D0(arg0);
    }
}
