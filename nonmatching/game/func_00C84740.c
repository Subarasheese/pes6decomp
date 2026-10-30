/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001E5410(void);
M2C_UNK func_00C89490(s32, void *);                 /* extern */
M2C_UNK func_00C89550(s32, void *);                 /* extern */
M2C_UNK func_00C89590(s32, void *);                 /* extern */
M2C_UNK func_00C89690(s32, void *);                 /* extern */
M2C_UNK func_00C89780(s32, s32);                    /* extern */
M2C_UNK func_00C897C0(s32, s32);                    /* extern */
extern char D_00CA8810[];
extern char D_00CCC200[];
extern void *D_00CCCD90;

void func_00C84740(void) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s4;
    s32 var_a2;
    s32 var_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s2;
    void *var_s3;
    void *var_s3_2;

    var_s3 = D_00CCCD90;
    if (var_s3 != NULL) {
        do {
            var_s2 = D_00CCCD90;
            temp_f23 = M2C_FIELD(var_s3, f32 *, 0x40);
            temp_v1 = ((void *)D_00CCC200) + (M2C_FIELD(var_s3, s32 *, 0x74) * 0x140);
            temp_f24 = M2C_FIELD(var_s3, f32 *, 0x44);
            temp_f25 = M2C_FIELD(temp_v1, f32 *, 0x10) + (M2C_FIELD(var_s3, f32 *, 0x38) + (temp_f23 / 2.0f));
            temp_f26 = M2C_FIELD(temp_v1, f32 *, 0x14) + (M2C_FIELD(var_s3, f32 *, 0x3C) + (temp_f24 / 2.0f));
            if (var_s2 != NULL) {
                do {
                    if (var_s2 != var_s3) {
                        temp_f22 = M2C_FIELD(var_s2, f32 *, 0x44);
                        temp_s1 = var_s2 + 0x38;
                        temp_f6 = temp_f22 / 2.0f;
                        var_a2 = 0;
                        temp_v1_2 = ((void *)D_00CCC200) + (M2C_FIELD(var_s2, s32 *, 0x74) * 0x140);
                        temp_s0 = temp_v1_2 + 0x10;
                        temp_f3 = M2C_FIELD(var_s2, f32 *, 0x40);
                        temp_f4 = M2C_FIELD(temp_v1_2, f32 *, 0x14) + (M2C_FIELD(var_s2, f32 *, 0x3C) + temp_f6);
                        temp_f1 = fabsf(temp_f26 - temp_f4);
                        temp_f21 = temp_f24 + temp_f22;
                        if ((fabsf(temp_f25 - (M2C_FIELD(temp_v1_2, f32 *, 0x10) + (M2C_FIELD(var_s2, f32 *, 0x38) + (temp_f3 / 2.0f)))) <= ((temp_f23 + temp_f3) / 2.0f)) && (temp_f1 <= (temp_f21 / 2.0f))) {
                            var_a2 = 1;
                        }
                        if (var_a2 != 0) {
                            temp_f2 = temp_f4 - temp_f26;
                            temp_f1_2 = ((temp_f24 / 2.0f) + temp_f6) - fabsf(temp_f2);
                            if (!(temp_f1_2 <= 0.0f)) {
                                if (temp_f2 < 0.0f) {
                                    M2C_FIELD(temp_s1, f32 *, 4) = (f32) (M2C_FIELD(temp_s1, f32 *, 4) - (temp_f1_2 + temp_f24));
                                    temp_f20 = M2C_FIELD(M2C_FIELD(var_s3, void **, 0x7C), f32 *, 0x30);
                                    temp_f1_3 = M2C_FIELD(temp_s1, f32 *, 4);
                                    if ((temp_f1_3 + M2C_FIELD(temp_s0, f32 *, 4)) < (temp_f20 + (-func_001E5410() / 2.0f))) {
                                        M2C_FIELD(temp_s1, f32 *, 4) = (f32) (temp_f1_3 + (temp_f22 + (temp_f20 + temp_f21)));
                                    }
                                } else {
                                    M2C_FIELD(temp_s1, f32 *, 4) = (f32) (M2C_FIELD(temp_s1, f32 *, 4) - (temp_f24 + (temp_f22 + (temp_f24 - temp_f1_2))));
                                    temp_f20_2 = M2C_FIELD(M2C_FIELD(var_s3, void **, 0x7C), f32 *, 0x30);
                                    temp_f1_4 = M2C_FIELD(temp_s1, f32 *, 4);
                                    if ((temp_f1_4 + M2C_FIELD(temp_s0, f32 *, 4)) < (temp_f20_2 + (-func_001E5410() / 2.0f))) {
                                        M2C_FIELD(temp_s1, f32 *, 4) = (f32) (temp_f1_4 + (temp_f22 + (temp_f20_2 + temp_f21)));
                                    }
                                }
                            }
                            M2C_FIELD(var_s2, s32 *, 0x78) = 1;
                        }
                    }
                    var_s2 = M2C_FIELD(var_s2, void **, 0x84);
                } while (var_s2 != NULL);
            }
            var_s3 = M2C_FIELD(var_s3, void **, 0x84);
        } while (var_s3 != NULL);
    }
    var_s3_2 = D_00CCCD90;
    if (var_s3_2 != NULL) {
        do {
            temp_s2 = M2C_FIELD(var_s3_2, s32 *, 0x74);
            temp_s4 = temp_s2 + 0x66;
            temp_s1_2 = ((void *)D_00CCC200) + (temp_s2 * 0x140);
            temp_s0_2 = temp_s1_2 + 0xA0;
            func_00C89690(temp_s4, temp_s1_2 + 0x10);
            func_00C89590(temp_s4, temp_s0_2 + 0x38);
            func_00C89490(temp_s4, ((void *)D_00CA8810) + (M2C_FIELD(temp_s1_2, s32 *, 0xF0) * 4));
            temp_a1 = M2C_FIELD(temp_s0_2, s32 *, 0x48);
            if (temp_a1 != M2C_FIELD(temp_s0_2, s32 *, 0x4C)) {
                func_00C89780(temp_s4, temp_a1);
                M2C_FIELD(temp_s0_2, s32 *, 0x4C) = (s32) M2C_FIELD(temp_s0_2, s32 *, 0x48);
            }
            func_00C89550(temp_s4, temp_s0_2 + 8);
            var_v0 = M2C_FIELD(temp_s1_2, s32 *, 0x128) != 0;
            if (var_v0 != 0) {
                var_v0 = M2C_FIELD(temp_s1_2, s32 *, 0x10C) != 0;
            }
            func_00C897C0(temp_s2 + 0x66, var_v0 & 0xFF);
            if ((M2C_FIELD(var_s3_2, s32 *, 0x78) != 0) || (M2C_FIELD(M2C_FIELD(var_s3_2, void **, 0x7C), s32 *, 0x54) != 0)) {

            }
            M2C_FIELD(var_s3_2, s32 *, 0x78) = 0;
            M2C_FIELD(M2C_FIELD(var_s3_2, void **, 0x7C), s32 *, 0x54) = 0;
            var_s3_2 = M2C_FIELD(var_s3_2, void **, 0x84);
        } while (var_s3_2 != NULL);
    }
}
