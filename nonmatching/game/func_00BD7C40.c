/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
u32 func_009B33A0(s32, s32, s32);                   /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
s32 *func_00B2A420(u8);                             /* extern */
M2C_UNK func_00B35E10(void *, s32 *, s32 *);        /* extern */
s32 func_00BA8740(M2C_UNK);                         /* extern */
M2C_UNK func_00BBA080(void *);                      /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BD8510(void *, s32 *, s32 *);        /* extern */
extern char D_00592370[];

void func_00BD7C40(void *arg0) {
    s32 *temp_s0;
    s32 *temp_s1;
    s32 *var_s1;
    s32 temp_s0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;
    s8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    temp_s0 = temp_v0 + 0x70;
    temp_s1 = temp_v0 + 0x6C;
    func_00B2A420(func_00BF6270());
    if ((*(u8 *)D_00592370) == 0) {
        func_00B35E10(arg0, temp_s1, temp_s0);
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x10) != 0) {
            func_00BD8510(arg0, temp_s1, temp_s0);
        }
        var_s1 = func_00B2A420(1U);
        var_s0 = 0;
loop_16:
        if ((arg0 != var_s1) && (temp_v0_2 = M2C_FIELD(arg0, void **, 0), ((func_009B33A0(*var_s1, (s32) M2C_FIELD(temp_v0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_v0_2, f32 *, 0x70)) < 0x24001U) != 0))) {
            var_v0 = 0;
        } else {
            var_s0 += 1;
            var_s1 += 8;
            if (var_s0 >= 0x16) {
                var_v0 = 1;
            } else {
                goto loop_16;
            }
        }
        if (var_v0 == 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 0);
            temp_v0_3 = (func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF) + 0x4000;
            temp_s0_2 = temp_v0_3 & 0xFFFF;
            if ((temp_v0_3 < 0) && (temp_s0_2 != 0)) {

            }
            temp_v1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_v1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x6C) + (f32) func_00BBB990(temp_s0_2 & 0xFFFF, 0x500));
            temp_v0_4 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_v0_4, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v0_4, f32 *, 0x70) + (f32) func_00BBB9C0(temp_s0_2 & 0xFFFF, 0x500));
        }
    } else {
        *temp_s1 = 0;
        *temp_s0 = 0x46086400;
    }
    if (func_00BA8740(0x23) == 0) {
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        var_v1 = 0x23;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70));
    } else if (func_00BA8740(0x12) != 0) {
        temp_a0_3 = M2C_FIELD(arg0, void **, 0);
        var_v1 = 0x2F;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(temp_a0_3, M2C_FIELD(temp_a0_3, f32 *, 0x6C), M2C_FIELD(temp_a0_3, f32 *, 0x70));
        temp_a0_4 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0_4, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a0_4, u16 *, 0x26);
        temp_a0_5 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0_5, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0_5, u16 *, 0x26);
    } else {
        temp_a0_6 = M2C_FIELD(arg0, void **, 0);
        var_v1 = 0x12;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(temp_a0_6, M2C_FIELD(temp_a0_6, f32 *, 0x6C), M2C_FIELD(temp_a0_6, f32 *, 0x70));
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1;
    func_00BBA080(arg0);
}
