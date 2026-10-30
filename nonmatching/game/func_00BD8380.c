/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
u32 func_009B33A0(s32, s32, s32);                   /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 *func_00B2A420(u8);                             /* extern */
M2C_UNK func_00B35E10(void **, s32 *, s32 *);       /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BD8510(void **, s32 *, s32 *);       /* extern */
extern char D_00592370[];

void func_00BD8380(void **arg0, s32 *arg1, s32 *arg2) {
    s32 *var_s1;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    func_00B2A420(func_00BF6270());
    if ((*(u8 *)D_00592370) != 0) {
        *arg1 = 0;
        *arg2 = 0x46086400;
    } else {
        func_00B35E10(arg0, arg1, arg2);
        if (M2C_FIELD(*arg0, u8 *, 0x10) != 0) {
            func_00BD8510(arg0, arg1, arg2);
        }
        var_s1 = func_00B2A420(1U);
        var_s0 = 0;
loop_6:
        if ((arg0 != var_s1) && (temp_v0 = *arg0, ((func_009B33A0(*var_s1, (s32) M2C_FIELD(temp_v0, f32 *, 0x6C), (s32) M2C_FIELD(temp_v0, f32 *, 0x70)) < 0x24001U) != 0))) {
            var_v1 = 0;
        } else {
            var_s0 += 1;
            var_s1 += 8;
            if (var_s0 >= 0x16) {
                var_v1 = 1;
            } else {
                goto loop_6;
            }
        }
        if (var_v1 == 0) {
            temp_a0 = *arg0;
            temp_v0_2 = (func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF) + 0x4000;
            temp_s0 = temp_v0_2 & 0xFFFF;
            if ((temp_v0_2 < 0) && (temp_s0 != 0)) {

            }
            temp_v1 = *arg0;
            M2C_FIELD(temp_v1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x6C) + (f32) func_00BBB990(temp_s0 & 0xFFFF, 0x500));
            temp_v1_2 = *arg0;
            M2C_FIELD(temp_v1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_v1_2, f32 *, 0x70) + (f32) func_00BBB9C0(temp_s0 & 0xFFFF, 0x500));
        }
    }
}
