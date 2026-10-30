/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
s8 func_00B35DC0(void *, f32, f32);                 /* extern */
M2C_UNK func_00B35E10(void *, f32 *, f32 *);        /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(void *, void *, f32, f32);    /* extern */

void func_00BA5B40(void *arg0) {
    f32 sp38;
    f32 sp3C;
    M2C_UNK var_a1;
    f32 var_f1;
    f32 var_f1_2;
    s16 var_v1;
    s32 temp_s0;
    u8 temp_a0;
    void **temp_v0;
    void *temp_a1;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_a1 = *temp_v0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) M2C_FIELD(temp_a1, f32 *, 0xE0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = (f32) M2C_FIELD(*temp_v0, f32 *, 0xE8);
    temp_v0_2 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, temp_a1, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
    switch (temp_a0) {                              /* irregular */
    case 4:
        func_00B35E10(arg0, &sp3C, &sp38);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), sp3C, sp38);
        temp_v0_3 = M2C_FIELD(arg0, void **, 0);
        temp_s0 = func_009B3070(M2C_FIELD(temp_v0_3, u16 *, 0x26), M2C_FIELD(temp_v0_3, u16 *, 0x2C)) & 0xFFFF;
        if (func_00BBB8C0(2) != 0) {
            var_a1 = 0x440;
            if (temp_s0 >= 0) {
                var_f1 = (f32) temp_s0;
            } else {
                var_f1 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
            }
            if (var_f1 < 20024.889f) {
                var_v1 = 0x444;
            } else {
                var_v1 = 0x443;
            }
        } else {
            var_a1 = 0x40F;
            if (temp_s0 >= 0) {
                var_f1_2 = (f32) temp_s0;
            } else {
                var_f1_2 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
            }
            if (var_f1_2 < 20024.889f) {
                var_v1 = 0x411;
            } else {
                var_v1 = 0x410;
            }
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x3E) = var_v1;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 6);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = func_00B35DC0(arg0, sp3C, sp38);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 6;
        return;
    case 2:
        if (M2C_FIELD(*temp_v0, u16 *, 0x18) == 3) {
            func_00BD3BA0(arg0, 5, 0);
        } else {
            return;
        }
        break;
    }
}
