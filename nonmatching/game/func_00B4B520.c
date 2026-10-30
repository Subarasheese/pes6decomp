/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern u8 func_00BF6260(void);
extern u8 func_00BF6280(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B4A420(void **);                     /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
extern char D_00CBCDE3[];

void func_00B4B520(void **arg0) {
    s32 *var_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0_2;
    u16 temp_v1_4;
    u8 temp_a0_4;
    void **var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_v0;
    void *temp_v1_3;

    if (((func_009E1C90(1) & 0xFF) == 0xC) && (func_00BF6280() == 2)) {
        var_v0 = func_00B2A420(func_00BF6260());
    } else {
        var_v0 = func_00B2A420((*(u8 *)D_00CBCDE3));
    }
    temp_s0 = M2C_FIELD(*arg0, s32 *, 0x1C);
    func_00B2ACF0(arg0);
    temp_a1 = *arg0;
    temp_a0 = M2C_FIELD(temp_a1, void **, 4);
    if ((M2C_FIELD(temp_a0, u16 *, 0x30) == 0x3FB) && (M2C_FIELD(temp_a0, f32 *, 0x38) <= 28.0f)) {
        temp_v1 = M2C_FIELD(temp_a1, s32 *, 0x1C);
        var_a0 = temp_a1 + 0x1C;
        if (temp_s0 >= temp_v1) {
            var_v0_2 = temp_s0 - 0x200;
            if (temp_v1 < var_v0_2) {
                goto block_8;
            }
        } else {
            M2C_FIELD(temp_a1, s32 *, 0x1C) = temp_s0;
        }
    } else {
        temp_v1_2 = M2C_FIELD(temp_a1, s32 *, 0x1C);
        var_v0_2 = temp_s0 + 0x200;
        var_a0 = temp_a1 + 0x1C;
        if (var_v0_2 >= temp_v1_2) {
            var_v0_2 = temp_s0 - 0x200;
            if (temp_v1_2 < var_v0_2) {
                goto block_8;
            }
        } else {
block_8:
            *var_a0 = var_v0_2;
        }
    }
    temp_v1_3 = *arg0;
    if ((s32) M2C_FIELD(temp_v1_3, u8 *, 0x4E) <= 0) {
        goto block_10;
    }
    temp_a0_2 = M2C_FIELD(temp_v1_3, void **, 4);
    if (func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) {
        temp_a1_2 = M2C_FIELD(*arg0, void **, 4);
        M2C_FIELD(temp_a1_2, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u8 *, 1) * 2);
        temp_a0_3 = *arg0;
        temp_a0_4 = M2C_FIELD(temp_a0_3, u8 *, 0x4E);
        if ((temp_a0_4 != 0xFF) && (temp_a0_4 != 0)) {
            M2C_FIELD(temp_a0_3, u8 *, 0x4E) = (u8) (temp_a0_4 - 1);
        }
    } else {
block_10:
        temp_a0_5 = M2C_FIELD(*arg0, void **, 4);
        temp_v1_4 = M2C_FIELD(temp_a0_5, u16 *, 0x30);
        switch (temp_v1_4) {                        /* irregular */
        default:
            if (func_00207D10(temp_a0_5) != 0) {
                func_00208610(M2C_FIELD(*arg0, void **, 4));
                func_00B4A420(arg0);
                return;
            }
            return;
        case 0x3FB:
            if (func_00207D10(temp_a0_5) != 0) {
                temp_s0_2 = *arg0;
                M2C_FIELD(temp_s0_2, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0_2, u16 *, 0x26), 0x800));
                temp_s0_3 = *arg0;
                M2C_FIELD(temp_s0_3, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_3, u16 *, 0x26), 0x800));
                M2C_FIELD(*arg0, s16 *, 0x18) = 0xE;
                func_00BD4040(arg0, 1);
            }
            break;
        case 0x494:
            if (func_00207D10(temp_a0_5) != 0) {
                temp_a0_6 = M2C_FIELD(*arg0, void **, 4);
                M2C_FIELD(temp_a0_6, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_a0_6, void **, 4), u8 *, 1) * 2);
            }
            break;
        case 0x40E:
            if (M2C_FIELD(M2C_FIELD(*var_v0, void **, 4), u16 *, 0x30) != 0x40D) {
                if (func_00207D80(temp_a0_5, 0x70) != 0) {
                    M2C_FIELD(M2C_FIELD(*arg0, void **, 4), s32 *, 0x38) = 0x42880000;
                }
            }
            temp_a0_7 = M2C_FIELD(*var_v0, void **, 4);
            if ((M2C_FIELD(temp_a0_7, u16 *, 0x30) == 0x40D) && (func_00207D80(temp_a0_7, 0x22) != 0)) {
                temp_v0 = M2C_FIELD(*arg0, void **, 4);
                if (M2C_FIELD(temp_v0, f32 *, 0x38) <= 100.0f) {
                    M2C_FIELD(temp_v0, f32 *, 0x38) = 114.0f;
                }
            }
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                func_00208610(M2C_FIELD(*arg0, void **, 4));
                temp_s0_4 = *arg0;
                M2C_FIELD(temp_s0_4, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_4, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0_4, u16 *, 0x26), 0x800));
                temp_s0_5 = *arg0;
                M2C_FIELD(temp_s0_5, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_5, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_5, u16 *, 0x26), 0x800));
                M2C_FIELD(*arg0, s16 *, 0x18) = 4;
                func_00BD4040(arg0, 1);
            }
            break;
        }
    }
}
