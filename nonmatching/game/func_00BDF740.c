/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
extern u8 func_00BF6270(void);
M2C_UNK func_00208610(void *);                      /* extern */
u16 func_009B3220(s32, u16, s32);                   /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B9E5D0(void **);                     /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BDF740(void **arg0) {
    s32 temp_s3;
    s32 var_v1;
    u16 var_v0;
    u8 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s2;
    void *temp_v1;
    void *var_v0_2;

    temp_s2 = *arg0;
    temp_s1 = M2C_FIELD(temp_s2, u8 *, 0);
    temp_s3 = func_009B3480(*arg0, (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC)) & 0xFFFF;
    if (temp_s1 != func_00BF6270()) {
        var_v0 = func_009B3220(temp_s3, M2C_FIELD(*arg0, u16 *, 0x26), (func_00BBB8C0(0x30) + 0x40) & 0xFFFF);
        M2C_FIELD(*arg0, u16 *, 0x26) = var_v0;
    } else {
        var_v0 = func_009B3220(temp_s3, M2C_FIELD(temp_s2, u16 *, 0x26), 0xB0);
        M2C_FIELD(*arg0, u16 *, 0x26) = var_v0;
    }
    M2C_FIELD(*arg0, u16 *, 0x28) = var_v0;
    if (M2C_FIELD(*arg0, u8 *, 0x4E) != 0) {
        if ((func_00BBB8C0(2) != 0) && (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0x84) != 0)) {
            temp_a0 = *arg0;
            var_v1 = 0x42080000;
            M2C_FIELD(temp_a0, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_a0, u8 *, 0x4E) - 1);
            var_v0_2 = M2C_FIELD(*arg0, void **, 4);
            goto block_13;
        }
        goto block_7;
    }
block_7:
    if (M2C_FIELD(*arg0, u8 *, 0x4F) != 0) {
        if ((func_00BBB8C0(2) != 0) && (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0x10E) != 0)) {
            temp_a0_2 = *arg0;
            var_v1 = 0x43560000;
            M2C_FIELD(temp_a0_2, u8 *, 0x4F) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 0x4F) - 1);
            var_v0_2 = M2C_FIELD(*arg0, void **, 4);
            goto block_13;
        }
        goto block_10;
    }
block_10:
    temp_v1 = *arg0;
    if ((M2C_FIELD(temp_v1, u8 *, 0x50) != 0) && (func_00207D80(M2C_FIELD(temp_v1, void **, 4), 0x13E) != 0)) {
        temp_a0_3 = *arg0;
        var_v1 = 0x42080000;
        M2C_FIELD(temp_a0_3, u8 *, 0x50) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 0x50) - 1);
        var_v0_2 = M2C_FIELD(*arg0, void **, 4);
block_13:
        M2C_FIELD(var_v0_2, s32 *, 0x38) = var_v1;
    }
    func_00B2ACF0(arg0);
    func_00209820();
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00B9E5D0(arg0);
    }
}
