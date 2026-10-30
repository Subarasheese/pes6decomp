/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */
u16 func_009B32D0(s32, u16, M2C_UNK);               /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(u8, void *);                   /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
s32 func_00BD8910(void *, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

s32 func_00BD86F0(void **arg0) {
    s32 temp_a1_2;
    s32 temp_s3_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v1;
    u16 temp_a0_2;
    u8 temp_s3;
    void **temp_s0;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = *arg0;
    if (M2C_FIELD(temp_v0, u16 *, 0x26) == M2C_FIELD(temp_v0, u16 *, 0x28)) {
        var_s1 = 0;
loop_2:
        temp_a1 = *arg0;
        temp_s3 = M2C_FIELD((temp_a1 + ((M2C_FIELD(temp_a1, u8 *, 0x13) ^ 1) * 0xB) + var_s1), u8 *, 0x1B4);
        if (temp_s3 != 0xFF) {
            temp_a0 = *arg0;
            temp_s0 = func_00B2A420(temp_s3, temp_a1);
            temp_v1 = temp_s3 & 0xFF;
            if ((u32) M2C_FIELD((temp_a0 + (temp_v1 * 4)), u32 *, 0x158) < 0x240000U) {
                temp_s3_2 = (M2C_FIELD((temp_a0 + (temp_v1 * 2)), u16 *, 0x128) + 0x7FFF + 1) & 0xFFFF;
                temp_a1_2 = func_009B3070(temp_s3_2, M2C_FIELD(*temp_s0, u16 *, 0x28)) & 0xFFFF;
                if (temp_a1_2 < 0x2001) {
                    temp_a0_2 = M2C_FIELD(*temp_s0, u16 *, 0x28);
                    if (((((temp_s3_2 & 0xFFFF) - temp_a0_2) + 0x10000) & 0xFFFF) >= 0x8001) {
                        var_v1 = -1;
                    } else {
                        var_v1 = 1;
                    }
                    M2C_FIELD(*arg0, u16 *, 0x2C) = func_009B32D0((temp_a0_2 + (var_v1 * ((0x4000 - temp_a1_2) & 0xFFFF))) & 0xFFFF, M2C_FIELD(*arg0, u16 *, 0x26), 0x100);
                    temp_s1 = *arg0;
                    M2C_FIELD(temp_s1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x2C), 0x400));
                    temp_s1_2 = *arg0;
                    M2C_FIELD(temp_s1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1_2, u16 *, 0x2C), 0x400));
                    temp_a0_3 = *temp_s0;
                    temp_v0_2 = *arg0;
                    if (func_00BD8910(temp_a0_3, M2C_FIELD(temp_v0_2, f32 *, 0xE0), M2C_FIELD(temp_v0_2, f32 *, 0xE8), M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70), M2C_FIELD(temp_a0_3, f32 *, 0xE0), M2C_FIELD(temp_a0_3, f32 *, 0xE8), (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC)) != 0) {
                        temp_v0_3 = *arg0;
                        M2C_FIELD(temp_v0_3, f32 *, 0x70) = (f32) -M2C_FIELD(temp_v0_3, f32 *, 0x70);
                    }
                    temp_a0_4 = *arg0;
                    M2C_FIELD(*arg0, u16 *, 0x2C) = func_009B3480(temp_a0_4, M2C_FIELD(temp_a0_4, f32 *, 0x6C), M2C_FIELD(temp_a0_4, f32 *, 0x70));
                    return 1;
                }
            }
            goto block_6;
        }
block_6:
        var_s1 += 1;
        if (var_s1 >= 0xB) {
            goto block_7;
        }
        goto loop_2;
    }
block_7:
    return 0;
}
