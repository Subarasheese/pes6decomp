/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
extern u32 func_00B5B230(void);
void *func_00223E00(s16);                           /* extern */
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00970870(s16);                             /* extern */
s32 func_00994750();                                /* extern */
void *func_00994C60(u8, s32);                       /* extern */
void *func_00B5B410(s32, M2C_UNK);                  /* extern */
void *func_00B5B670(s32, M2C_UNK);                  /* extern */

void func_00B5D850(u16 *arg0, s32 arg1) {
    s16 *var_s7;
    s16 temp_s1;
    s16 temp_s3;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    u16 *var_a0;
    u16 *var_s1_3;
    u16 *var_s2;
    u16 *var_s2_2;
    u16 temp_v1;
    u32 temp_v0;
    u32 var_s2_3;
    u64 temp_a0_3;
    u8 *temp_v0_4;
    u8 temp_a0_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_s0 = func_00994750();
        var_a1 = 0;
        var_a0 = arg0;
        do {
            M2C_FIELD(var_a0, u16 *, 0) = 0;
            var_a1 += 7;
            M2C_FIELD(var_a0, s16 *, 2) = 0;
            M2C_FIELD(var_a0, s16 *, 4) = 0;
            M2C_FIELD(var_a0, s16 *, 6) = 0;
            M2C_FIELD(var_a0, s16 *, 8) = 0;
            M2C_FIELD(var_a0, s16 *, 0xA) = 0;
            M2C_FIELD(var_a0, s16 *, 0xC) = 0;
            var_a0 += 0xE;
        } while (var_a1 < 0x2A);
        var_s4 = 0;
        var_s1 = 0;
        if ((s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x62E) + temp_s0), u8 *, 0x29AC) > 0) {
            var_s2 = arg0;
loop_5:
            if ((var_s4 < M2C_FIELD(temp_v0, s16 *, 0x630)) && (var_s4 < 0x2A)) {
                temp_v0_2 = func_00B5B670(var_s1 & 0xFFFF, 0);
                if (temp_v0_2 != NULL) {
                    var_s4 += 1;
                    *var_s2 = M2C_FIELD(temp_v0_2, u16 *, 4);
                    var_s2 += 2;
                }
                var_s1 += 1;
                if (var_s1 >= (s32) M2C_FIELD((temp_s0 + M2C_FIELD(temp_v0, u8 *, 0x62E)), u8 *, 0x29AC)) {

                } else {
                    goto loop_5;
                }
            }
        }
        var_s1_2 = 0;
        if ((s32) M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x62E) & 0xFF) + temp_s0), u8 *, 0x61944) > 0) {
            var_s2_2 = arg0 + (var_s4 * 2);
loop_13:
            if ((var_s4 < M2C_FIELD(temp_v0, s16 *, 0x630)) && (var_s4 < 0x2A)) {
                temp_v0_3 = func_00B5B410(var_s1_2 & 0xFFFF, 0);
                if (temp_v0_3 != NULL) {
                    var_s4 += 1;
                    *var_s2_2 = M2C_FIELD(temp_v0_3, u16 *, 4);
                    var_s2_2 += 2;
                }
                var_s1_2 += 1;
                if (var_s1_2 >= (s32) M2C_FIELD((temp_s0 + M2C_FIELD(temp_v0, u8 *, 0x62E)), u8 *, 0x61944)) {

                } else {
                    goto loop_13;
                }
            }
        }
        var_s0 = 0;
        var_s2_3 = temp_v0;
        var_s1_3 = arg0 + (var_s4 * 2);
loop_20:
        if ((var_s4 < M2C_FIELD(temp_v0, s16 *, 0x630)) && (var_s4 < 0x2A)) {
            temp_s3 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s0 & 0xFF) & 0xFFFF;
            if ((temp_s3 != 0) && ((func_002243B0((s32) M2C_FIELD(temp_v0, u8 *, 0x62E), var_s0 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s3) != 0)) {
                temp_v0_4 = func_00223C10();
                if ((temp_v0_4 != NULL) && ((*temp_v0_4 & 0xF) == 3)) {
                    var_s4 += 1;
                    *var_s1_3 = M2C_FIELD(var_s2_3, u16 *, 0x644);
                    var_s1_3 += 2;
                }
            }
            var_s0 += 1;
            var_s2_3 += 0x10;
            if (var_s0 < 0x20) {
                goto loop_20;
            }
        }
        if (arg1 == 1) {
            var_s6 = 0;
            var_s7 = arg0 + (var_s4 * 2);
loop_31:
            if (var_s4 < 0x2A) {
                temp_s1 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s6 & 0xFF) & 0xFFFF;
                if ((temp_s1 != 0) && ((func_002243B0((s32) M2C_FIELD(temp_v0, u8 *, 0x62E), var_s6 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s1) != 0)) {
                    temp_v0_5 = func_00223C10();
                    if (temp_v0_5 != NULL) {
                        temp_v0_6 = func_00223E00(temp_s1);
                        if ((temp_v0_6 != NULL) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_5, u8 *, 1) << 0x38) >> 0x3A) <= 0)) {
                            temp_a0 = M2C_FIELD(temp_v0_5, u8 *, 0) & 0xF;
                            if ((temp_a0 != 5) && (temp_a0 != 6) && (temp_a0 != 7) && ((M2C_FIELD(temp_v0_6, u8 *, 6) & 0x3F) != 3)) {
                                var_s3 = 0;
loop_43:
                                var_s2_4 = var_s3 & 0xFF;
                                temp_v0_7 = func_00994C60(M2C_FIELD(temp_v0, u8 *, 0x62E), var_s2_4);
                                if ((temp_v0_7 == NULL) || (temp_v1 = M2C_FIELD(temp_v0_7, u16 *, 4), (temp_v1 == 0)) || (temp_v1 != (temp_s1 & 0xFFFF)) || (temp_a0_2 = M2C_FIELD(temp_v0_7, u8 *, 0), ((temp_a0_2 & 1) != 0)) || (((u64) ((s64) temp_a0_2 << 0x39) >> 0x3A) != 6) || (temp_a0_3 = (u64) ((s64) (u16) M2C_FIELD(temp_v0_7, u8 *, 0) << 0x35) >> 0x3C, (temp_a0_3 == 4)) || (temp_a0_3 == 6)) {
                                    var_s3 = (var_s3 + 1) & 0xFF;
                                    var_s2_4 = var_s3;
                                    if (var_s3 >= 0x25) {

                                    } else {
                                        goto loop_43;
                                    }
                                }
                                if (var_s2_4 >= 0x25) {
                                    *var_s7 = temp_s1;
                                    var_s4 += 1;
                                    var_s7 += 2;
                                }
                            }
                        }
                    }
                }
                var_s6 += 1;
                if (var_s6 < 0x20) {
                    goto loop_31;
                }
            }
        }
    }
}
