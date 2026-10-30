/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00207360(int);
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
void **func_00B2A420(s32);                          /* extern */
s32 func_00BB1310(s32, u16);                        /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00C37130(u8, s32, M2C_UNK, u16);       /* extern */
M2C_UNK func_00C373B0(u8, s32, s32);                /* extern */
void *func_00C375E0(u8);                            /* extern */
s8 func_00C37640(u8);                               /* extern */
s32 func_00C37790(u8, void *);                      /* extern */
s32 func_00C37850(u8);                              /* extern */
extern u8 D_003EA7F6;

void func_00C3A630(void *arg0) {
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_s1_2;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 var_a1;
    u16 var_a1_2;
    void **temp_s1;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v0;

    temp_s0 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    temp_s0_2 = M2C_FIELD(temp_s0, s32 *, 4) + (func_00C37790(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), arg0) * 0x14);
    temp_s1 = func_00B2A420(func_00C37850(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)));
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = *temp_s1;
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0) >= (s32) M2C_FIELD(temp_a0, u8 *, 0)) {
        var_a1 = M2C_FIELD(temp_s0_2, u16 *, 0xE);
    } else {
        temp_v0_2 = M2C_FIELD(temp_s0_2, u16 *, 0xE);
        if ((s32) temp_v0_2 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f1 = (f32) temp_v0_2;
        }
        var_a1 = (u16) (s32) (var_f1 - M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), f32 *, 0x28));
    }
    if (func_00207D80(M2C_FIELD(temp_a0, void **, 4), (s32) var_a1) != 0) {
        temp_s0_3 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
        temp_s1_2 = func_00C37790(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), arg0);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = func_00C37640(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
        temp_s0_4 = M2C_FIELD(temp_s0_3, s32 *, 4) + (temp_s1_2 * 0x14);
        var_a1_2 = M2C_FIELD(temp_s0_4, u16 *, 0);
        if (M2C_FIELD(temp_s0_3, u8 *, 1) != 0) {
            var_a1_2 = func_00BB1310(var_a1_2 & 0xFFFF, var_a1_2) & 0xFFFF;
        }
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1_2, 0);
        func_00207360((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if ((s32) D_003EA7F6 >= 0) {
            var_f1_2 = (f32) D_003EA7F6;
        } else {
            var_f1_2 = 2.0f * (f32) (((u8) D_003EA7F6 >> 1) | (D_003EA7F6 & 1));
        }
        M2C_FIELD(temp_a1, f32 *, 0x28) = (f32) (M2C_FIELD(temp_a1, f32 *, 0x28) * var_f1_2);
        if (temp_s1_2 != 0) {
            temp_v1 = M2C_FIELD(temp_s0_4, u16 *, 0x10);
            if (temp_v1 != 0) {
                func_00C373B0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), temp_s1_2, M2C_FIELD(temp_s0_4, u16 *, 0xE) + (temp_v1 & 0xFFFF));
                func_00C37130(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), temp_s1_2, 0, M2C_FIELD(temp_s0_4, u16 *, 0x10));
            }
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x31;
    }
}
