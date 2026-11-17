/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF6270(void);
u32 func_009B33A0(void *, s32, s32);                /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(s32);                           /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BD4040(void *, s32);                 /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BDFAE0(void *arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 sum;
    u32 var_v1;
    u32 temp_s0_2;
    u32 temp_v0_6;
    u8 temp_v0;
    u16 var_s2;
    void **temp_s0;
    void *temp_a0_3;
    void *temp_v0_5;
    void *temp_v0_7;

    temp_s0 = func_00B2A420(func_00BF6270());
    temp_a1 = func_00BBB8C0(0x1745) & 0xFFFF;
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51);
    if ((temp_v0 & 1) == 0) {
        var_v1 = temp_v0 >> 1;
    } else {
        var_v1 = 0xB - ((temp_v0 >> 1) + (temp_v0 & 1));
    }
    sum = temp_a1 + (((s32) var_v1 % 11) << 0x10);
    var_s2 = (sum / 11) + 0xE000;
    if ((*(f32 *)D_00CBCAD8) < 0.0f) {
        var_s2 = var_s2 + 0x8000;
    }
    if (((*(f32 *)D_00CBCAD8) * (*(f32 *)D_00CBCADC)) < 0.0f) {
        var_s2 = var_s2 + 0x4000;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) ((*(f32 *)D_00CBCAD8) + (f32) func_00BBB990(var_s2, 0x300));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = (f32) ((*(f32 *)D_00CBCADC) + (f32) func_00BBB9C0(var_s2, 0x300));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2E) = func_009B3480(M2C_FIELD(arg0, void **, 0), (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC));
    if (arg0 != temp_s0) {
        temp_v0_5 = M2C_FIELD(arg0, void **, 0);
        temp_a0_3 = M2C_FIELD(arg0, void **, 0);
        temp_s0_2 = func_009B33A0(*temp_s0, (s32) M2C_FIELD(temp_v0_5, f32 *, 0x6C), (s32) M2C_FIELD(temp_v0_5, f32 *, 0x70));
        temp_v0_6 = func_009B33A0(temp_a0_3, (s32) M2C_FIELD(temp_a0_3, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_3, f32 *, 0x70));
        if (temp_v0_6 < (u32) (temp_s0_2 >> 1)) {
            var_v0 = 2;
        } else if (temp_v0_6 >= temp_s0_2) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
    } else {
        var_v0 = 4;
    }
    func_00BD4040(arg0, var_v0 & 0xFF);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 5, 1);
    func_00BD3BA0(arg0, 0, 1);
    temp_v0_7 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_7, f32 *, 0x6C), M2C_FIELD(temp_v0_7, f32 *, 0x70));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x92;
}
