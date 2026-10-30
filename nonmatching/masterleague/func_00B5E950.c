/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
M2C_UNK sprintf(void *, M2C_UNK *, s32);      /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
u16 func_00225680(u8);                              /* extern */
s32 func_002283E0(void *, M2C_UNK);                 /* extern */
s32 func_00229010(s32);                             /* extern */
s32 func_00235CB0(s32);                             /* extern */
f32 func_002C7390(void *, M2C_UNK);                 /* extern */
s32 func_0095ADC0(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
s32 func_00AFDBF0(u16);                             /* extern */
s32 func_00B02860(u16);                             /* extern */
s32 func_00B2ACD0(void *);                          /* extern */
extern void *D_003EAEC4;
extern char D_00B886B0[];

void func_00B5E950(void) {
    u16 spC0;
    u16 spD0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    f32 var_f21;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    f32 var_f25;
    s32 temp_v0_2;
    s32 var_s3_2;
    s32 var_s7;
    s8 var_s7_2;
    u16 *var_s2_2;
    u16 *var_s4_2;
    u16 temp_s5;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 var_s2_3;
    u16 var_s6;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s2;
    u32 var_s3_3;
    u32 var_s5;
    u8 temp_s0;
    u8 temp_s4;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 var_v0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_5;
    void *temp_v1;
    void *var_s3;
    void *var_s4;
    void *var_s5_2;

    temp_s1 = D_003EAEC4;
    if (temp_s1 != NULL) {
        var_s0 = 0;
        var_s3 = temp_s1;
loop_2:
        temp_v1 = temp_s1 + var_s0;
        temp_s4 = M2C_FIELD(temp_v1, u8 *, 0x5CC);
        if (temp_s4 != 0xFF) {
            var_s5 = 0;
loop_4:
            if ((func_00229010(var_s5 & 0xFF) & 0xFF) != M2C_FIELD(temp_v1, u8 *, 0x5CC)) {
                var_s5 += 1;
                if (var_s5 < 0xFFU) {
                    goto loop_4;
                }
            }
            var_f20 = 0.0f;
            var_s2 = 0;
            M2C_FIELD(var_s3, s32 *, 0x5E8) = (s32) (func_00235CB0(var_s5 & 0xFF) & 0xFF);
            var_f21 = 0.0f;
            var_f22 = 0.0f;
            var_f23 = 0.0f;
            var_f24 = 0.0f;
            var_f25 = 0.0f;
            do {
                temp_v0 = func_00970870(func_00224BC0(temp_s4, var_s2 & 0xFF) & 0xFFFF);
                if (temp_v0 != NULL) {
                    var_f25 += func_002C7390(temp_v0, 0);
                    var_f24 += func_002C7390(temp_v0, 1);
                    var_f23 += func_002C7390(temp_v0, 2);
                    var_f22 += func_002C7390(temp_v0, 3);
                    var_f21 += func_002C7390(temp_v0, 4);
                    var_f20 += func_002C7390(temp_v0, 5);
                }
                var_s2 += 1;
            } while (var_s2 < 0xBU);
            var_s0 += 1;
            M2C_FIELD(var_s3, f32 *, 0x5D0) = (f32) (var_f25 / 11.0f);
            M2C_FIELD(var_s3, f32 *, 0x5DC) = (f32) (var_f22 / 11.0f);
            M2C_FIELD(var_s3, f32 *, 0x5D4) = (f32) (var_f24 / 11.0f);
            M2C_FIELD(var_s3, f32 *, 0x5E0) = (f32) (var_f21 / 11.0f);
            M2C_FIELD(var_s3, f32 *, 0x5E4) = (f32) (var_f20 / 11.0f);
            M2C_FIELD(var_s3, f32 *, 0x5D8) = (f32) (var_f23 / 11.0f);
            var_s3 += 0x1C;
            if (var_s0 >= 2U) {

            } else {
                goto loop_2;
            }
        }
        temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x5CD);
        spC0 = func_00225680(temp_s0);
        temp_v0_2 = func_002260F0((s32) temp_s0);
        if (temp_v0_2 != 0) {
            var_s6 = 0;
            var_s7 = 0xFF;
            var_s0_2 = 0;
            var_s4 = temp_s1;
            var_s3_2 = temp_v0_2;
            var_s2_2 = &spD0;
loop_14:
            temp_s5 = func_00224BC0(M2C_FIELD(temp_s1, u8 *, 0x5CD), var_s0_2 & 0xFF) & 0xFFFF;
            if (temp_s5 != 0) {
                M2C_FIELD(var_s4, u16 *, 0x608) = temp_s5;
                if (var_s0_2 < 0xBU) {
                    var_v0 = M2C_FIELD((temp_v0_2 + var_s0_2), u8 *, 0xD6);
                } else {
                    var_v0 = (u8) ((u64) ((s64) M2C_FIELD(func_00970870(temp_s5), u8 *, 1) << 0x38) >> 0x3C);
                }
                M2C_FIELD(var_s4, s32 *, 0x610) = (s32) var_v0;
                if (var_s0_2 < 0xBU) {
                    if (M2C_FIELD(var_s4, s32 *, 0x610) != 0) {
                        temp_v0_3 = M2C_FIELD(var_s3_2, u8 *, 0xC0);
                        if ((s32) temp_v0_3 < 0) {
                            var_f0 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
                        } else {
                            var_f0 = (f32) temp_v0_3;
                        }
                        M2C_FIELD(var_s4, f32 *, 0x614) = var_f0;
                        temp_v0_4 = M2C_FIELD(var_s3_2, u8 *, 0xC1);
                        if ((s32) temp_v0_4 < 0) {
                            var_f0_2 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
                        } else {
                            var_f0_2 = (f32) temp_v0_4;
                        }
                        M2C_FIELD(var_s4, f32 *, 0x618) = var_f0_2;
                    } else {
                        M2C_FIELD(var_s4, f32 *, 0x614) = 2.0f;
                        M2C_FIELD(var_s4, f32 *, 0x618) = 52.0f;
                    }
                }
                M2C_FIELD(var_s4, s32 *, 0x60C) = (s32) (func_00B02860(M2C_FIELD(var_s4, u16 *, 0x608)) & 0xFF);
                if (var_s0_2 < 0xBU) {
                    *var_s2_2 = func_00B2ACD0(func_00970870(temp_s5)) & 0xFF;
                    if (func_00AFDBF0(temp_s5) != 0) {
                        temp_v1_2 = *var_s2_2;
                        if ((var_s6 & 0xFFFF) < (s32) temp_v1_2) {
                            var_s6 = temp_v1_2;
                            var_s7 = var_s0_2 & 0xFF;
                        }
                    }
                }
                var_s0_2 += 1;
                var_s4 += 0x14;
                var_s3_2 += 2;
                var_s2_2 += 2;
                if (var_s0_2 < 0x20U) {
                    goto loop_14;
                }
            }
            var_s7_2 = 0xFF;
            var_s2_3 = 0;
            var_s3_3 = 0;
            var_s5_2 = temp_s1;
            var_s4_2 = &spD0;
            do {
                temp_v0_5 = func_00970870(M2C_FIELD(var_s5_2, u16 *, 0x608));
                if (!(func_002283E0(temp_v0_5, 4) & 0xFF)) {
                    if (func_002283E0(temp_v0_5, 5) & 0xFF) {
                        goto block_42;
                    }
                } else {
block_42:
                    *var_s4_2 += 5;
                }
                *var_s4_2 += M2C_FIELD(temp_v0_5, u8 *, 0x21) & 7;
                if (var_s3_3 == (var_s7 & 0xFF)) {
                    *var_s4_2 += 2;
                }
                temp_v1_3 = *var_s4_2;
                if ((var_s2_3 & 0xFFFF) < (s32) temp_v1_3) {
                    var_s2_3 = temp_v1_3;
                    var_s7_2 = var_s3_3 & 0xFF;
                }
                var_s3_3 += 1;
                var_s5_2 += 0x14;
                var_s4_2 += 2;
            } while (var_s3_3 < 0xBU);
            if ((var_s7_2 & 0xFF) >= 0xB) {
                var_s7_2 = 0;
            }
            M2C_FIELD(temp_s1, s8 *, 0x888) = var_s7_2;
            sprintf(temp_s1 + 0x520, ((void *)D_00B886B0), func_0095ADC0(spC0));
        }
    }
}
