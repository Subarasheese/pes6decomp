/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern s32 func_002079F0(void *);
M2C_UNK func_001CD9E0(f32);                         /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00B36450();                                /* extern */
s32 func_00B3B740(void **);                         /* extern */
s32 func_00B3C280();                                /* extern */
M2C_UNK func_00B846A0(void **);                     /* extern */
M2C_UNK func_00B89870(void **);                     /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BE2800(void **);                     /* extern */
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCD81[];
extern char D_00CBCD8E[];

void func_00B8FF30(void **arg0) {
    f32 var_f12;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    u8 temp_v1_2;
    u8 var_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_3;

    temp_s0 = func_00B3C280() & 0xFF;
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    (*(f32 *)D_00CBCB00) = M2C_FIELD(*arg0, f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(*arg0, f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = M2C_FIELD(*arg0, u16 *, 0x26);
    temp_a0 = *arg0;
    temp_v0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (temp_v0_2 >= 0) {
        var_f12 = (f32) temp_v0_2;
    } else {
        var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
    }
    func_001CD9E0(var_f12);
    temp_s0_2 = temp_s0 & 0xFF;
    if ((u32) (temp_s0_2 - 1) >= 2U) {

    } else if (func_002079F0(M2C_FIELD(*arg0, void **, 4)) != 0) {
        if ((func_00B36450() != 0) && (func_00B3B740(arg0) == 0)) {
            if (temp_s0_2 == 2) {
                temp_v1 = *arg0;
                temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x50);
                if (temp_v1_2 != 0) {
                    M2C_FIELD(temp_v1, u8 *, 0x50) = (u8) (temp_v1_2 - 1);
                    return;
                }
            }
            func_00B364D0(2U);
            func_00B89870(arg0);
            (*(s8 *)D_00CBCD81) = 1;
            func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x59A, 0);
            temp_v1_3 = *arg0;
            M2C_FIELD(temp_v1_3, u16 *, 0x28) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x26);
            temp_v0_3 = *arg0;
            if ((M2C_FIELD(temp_v0_3, f32 *, 0xE0) * M2C_FIELD(temp_v0_3, f32 *, 0xE8)) < 0.0f) {
                M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 4), s8 *, 0x2D) = 0;
                var_v1 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D);
            } else {
                M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 4), s8 *, 0x2D) = 1;
                var_v1 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D);
            }
            (*(u8 *)D_00CBCD8E) = var_v1;
            func_00B846A0(arg0);
            M2C_FIELD(*arg0, s16 *, 0x18) = 0x4B;
            return;
        }
        func_00BE2800(arg0);
        (*(s8 *)D_00CBCD81) = 0xFF;
    }
}
