/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BD3BA0(void *, s32, s32);
extern u8 func_00BF6270(void);
extern u32 func_00B363E0(s32);
extern s32 func_009B3070(s32, s32);
extern void * func_00B2A420(u32);
extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_00B36450(void);
M2C_UNK func_00B34F70(void **, void **);            /* extern */
s32 func_00B35C60(void **);                         /* extern */
s32 func_00BBB990(s32, s32);                        /* extern */
s32 func_00BBB9C0(s32, s32);                        /* extern */
M2C_UNK func_00BD3BE0(void **, M2C_UNK);            /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
extern char D_00591BEC[];
extern char D_00CBCD81[];

void func_00BE5C00(void **arg0) {
    f32 temp_f1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s3;
    void **temp_v0;
    void *temp_a0;
    void *temp_v0_3;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_v1 = M2C_FIELD(*temp_v0, u16 *, 0x26) + 0x10000 + ((((func_00B35C60(temp_v0) == 0) ? 1 : -1) & 0xFF) << 0xF);
    temp_v0_2 = temp_v1 & 0xFFFF;
    if ((temp_v1 < 0) && (temp_v0_2 != 0)) {

    }
    temp_s0 = temp_v0_2 & 0xFFFF;
    temp_f1 = 252928.0f / (*(f32 *)D_00591BEC);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_s3 = (s32) temp_f1;
    } else {
        var_s3 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(*temp_v0, f32 *, 0xE0) + (f32) func_00BBB990(temp_s0, var_s3));
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (M2C_FIELD(*temp_v0, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s0, var_s3));
    temp_a0 = *arg0;
    temp_s0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    func_00B34F70(arg0, temp_v0);
    func_00BD3BA0(arg0, 5, 0);
    temp_v0_3 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x6C), M2C_FIELD(temp_v0_3, f32 *, 0x70));
    if (func_00B363E0(1) == 0) {
        if (M2C_FIELD(M2C_FIELD(*temp_v0, void **, 4), u16 *, 0x30) != 0x502) {
            if (((*(u8 *)D_00CBCD81) == 0) && (func_00B36450() != 0) && ((u32) temp_s0_2 < 0x10000U) && ((func_009B3070((s32) M2C_FIELD(*arg0, u16 *, 0x26), (s32) M2C_FIELD(*temp_v0, u16 *, 0x26)) & 0xFFFF) < 0x3000)) {
                (*(u8 *)D_00CBCD81) = 1;
            }
        } else {
            M2C_FIELD(*arg0, s16 *, 0x18) = 0xA2;
        }
    } else {
        func_00BD3BE0(arg0, 2);
        M2C_FIELD(*arg0, s16 *, 0x18) = 9;
    }
}
