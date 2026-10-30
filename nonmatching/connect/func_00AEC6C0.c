/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED880(void *, f32);
extern void * func_001EDD00(void *);
extern void * func_001E6E10(s32);
extern void func_001EDA30(void *, s32);
extern void func_001EF860(void *, void *);
extern void func_001EF900(void *, s8);
extern void func_001EDAE0(void *, s8);
M2C_UNK func_001EDD90(void *);                      /* extern */
M2C_UNK func_001EE790(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EF370(void *, s8 *);                /* extern */
void *func_00AEC2B0();                              /* extern */
extern char D_00B00610[];

s32 func_00AEC6C0(void *arg0) {
    s16 sp70;
    s16 sp72;
    s16 sp74;
    s16 sp76;
    s16 sp78;
    s16 sp7A;
    s16 sp7C;
    s16 sp7E;
    s8 sp80;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    M2C_UNK *var_s0;
    f32 *var_v1;
    f32 temp_f1;
    f32 temp_f2;
    s16 *var_v1_3;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f0_4;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 *var_v1_2;
    void *temp_s2;
    void *temp_v0;

    var_s3 = 0;
    temp_s2 = func_00AEC2B0();
    if (M2C_FIELD(arg0, f32 *, 0x1C) == 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x1C) = 448.0f;
    }
    if (temp_s2 != NULL) {
        func_001ED880(temp_s2, M2C_FIELD(arg0, f32 *, 0x20));
        func_001EDA30(temp_s2, 1);
        var_s4 = 0;
        var_s0 = ((void *)D_00B00610);
loop_4:
        temp_v0 = func_001EDD00(temp_s2);
        if (temp_v0 != NULL) {
            var_v1 = &sp90;
            var_v0 = 0x10;
            if (var_v1 != NULL) {
                do {
                    *var_v1 = 0;
                    var_v0 -= 1;
                    var_v1 += 1;
                } while (var_v0 != 0);
            }
            var_v1_2 = &sp80;
            var_v0_2 = 0x10;
            sp90 = M2C_FIELD(var_s0, f32 *, 4);
            sp94 = M2C_FIELD(arg0, f32 *, 0x18);
            if (var_v1_2 != NULL) {
                do {
                    *var_v1_2 = 0;
                    var_v0_2 -= 1;
                    var_v1_2 += 1;
                } while (var_v0_2 != 0);
            }
            var_v1_3 = &sp70;
            var_v0_3 = 0x10;
            sp88 = M2C_FIELD(var_s0, f32 *, 8);
            sp8C = M2C_FIELD(arg0, f32 *, 0x1C);
            if (var_v1_3 != NULL) {
                do {
                    *var_v1_3 = 0;
                    var_v0_3 -= 1;
                    var_v1_3 += 1;
                } while (var_v0_3 != 0);
            }
            temp_f2 = M2C_FIELD(var_s0, f32 *, 0x10);
            temp_f0 = (s32) temp_f2;
            sp70 = (s16) temp_f0;
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
            temp_f0_2 = (s32) temp_f1;
            sp72 = (s16) temp_f0_2;
            sp76 = (s16) temp_f0_2;
            sp78 = (s16) temp_f0;
            temp_f0_3 = (s32) (temp_f2 + M2C_FIELD(var_s0, f32 *, 8));
            sp74 = (s16) temp_f0_3;
            sp7C = (s16) temp_f0_3;
            temp_f0_4 = (s32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x1C));
            sp7A = (s16) temp_f0_4;
            sp7E = (s16) temp_f0_4;
            func_001EEAC0(temp_v0, func_001E6E10(M2C_FIELD(var_s0, s32 *, 0)));
            func_001EE790(temp_v0, &sp70);
            func_001EF860(temp_v0, &sp90);
            func_001EF370(temp_v0, &sp80);
            func_001EF900(temp_v0, 1);
            var_s4 += 1;
            var_s0 += 0x18;
            if (var_s4 != 0) {

            } else {
                goto loop_4;
            }
        }
        if (var_s4 != 0) {
            var_s3 = 1;
        }
        if (var_s3 != 0) {
            func_001EDAE0(temp_s2, 0);
            M2C_FIELD(arg0, void **, 0xC) = temp_s2;
        } else {
            func_001EDD90(temp_s2);
        }
    }
    return var_s3;
}
