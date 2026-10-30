/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern void * func_0022F150(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
void *func_00223E00(s16);                           /* extern */
s32 func_00938F10(s16, s32, void *);                /* extern */
void *func_00970870();                              /* extern */
s32 func_00AFDC20(s16, s32);                        /* extern */
s32 func_00B16CE0(u64);                             /* extern */

void func_00AFEBB0(s16 arg0, s8 arg1) {
    s16 temp_s6;
    s32 temp_a1;
    s32 temp_s7;
    s64 temp_a1_2;
    s64 var_a2;
    s64 var_s3;
    s64 var_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *var_a2_2;
    void *var_s4;
    void *var_v1;

    temp_s3 = func_00970870();
    temp_s2 = func_00223E00(arg0);
    temp_s1 = func_0022F150();
    temp_s0 = func_00228A80();
    if ((temp_s3 != NULL) && (temp_s2 != NULL) && (temp_s1 != NULL) && (temp_s0 != NULL)) {
        var_a2 = 0;
        var_v1 = temp_s0;
        temp_a1 = arg0 & 0xFFFF;
loop_5:
        temp_a0 = var_v1 + 0x1053A;
        if ((temp_a1 == M2C_FIELD(var_v1, u16 *, 0x1053A)) && (M2C_FIELD(temp_a0, u8 *, 5) == 0)) {
            M2C_FIELD(temp_a0, s8 *, 4) = (s8) (M2C_FIELD(temp_s1, u8 *, 7) - M2C_FIELD(temp_s2, s8 *, 0xC));
            M2C_FIELD(temp_a0, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 7);
        } else {
            var_a2 = (s64) ((var_a2 + 1) << 0x38) >> 0x38;
            var_v1 += 8;
            if (var_a2 < 0x14) {
                goto loop_5;
            }
        }
        var_v1_2 = 0;
        var_a2_2 = temp_s0;
loop_10:
        temp_a0_2 = var_a2_2 + 0x105DA;
        if ((temp_a1 == M2C_FIELD(var_a2_2, u16 *, 0x105DA)) && (M2C_FIELD(temp_a0_2, u8 *, 5) == 0)) {
            M2C_FIELD(temp_a0_2, s8 *, 4) = (s8) (M2C_FIELD(temp_s1, u8 *, 7) - M2C_FIELD(temp_s2, s8 *, 0xC));
            M2C_FIELD(temp_a0_2, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 7);
        } else {
            var_v1_2 = (s64) ((var_v1_2 + 1) << 0x38) >> 0x38;
            var_a2_2 += 8;
            if (var_v1_2 < 0x14) {
                goto loop_10;
            }
        }
        if ((func_00AFDC20(arg0, func_00938F10(arg0, temp_a1, var_a2_2) & 0xFF) == 1) && (temp_s6 = M2C_FIELD(temp_s2, u16 *, 0) & 0x3FF, temp_s7 = temp_s6 & 0xFFFF, temp_s0_2 = ((func_00B16CE0((u64) ((s64) M2C_FIELD(temp_s3, u8 *, 1) << 0x38) >> 0x3C) & 0xFF) * 0x28) + temp_s0, (((s32) M2C_FIELD(temp_s0_2, u16 *, 0x1069C) < temp_s7) != 0))) {
            var_s3 = 4;
            var_s4 = temp_s0_2 + 0x20;
loop_17:
            temp_a1_2 = (s64) (var_s3 << 0x38) >> 0x38;
            temp_a0_3 = var_s4 + 0x1067A;
            if ((temp_a1_2 != 0) && ((s32) M2C_FIELD(var_s4, u16 *, 0x10674) < temp_s7)) {
                func_001C4730(temp_a0_3, temp_s0_2 + ((temp_a1_2 - 1) * 8) + 0x1067A, 8);
                var_s3 = (s64) ((var_s3 - 1) << 0x38) >> 0x38;
                var_s4 -= 8;
                if (var_s3 < 0) {

                } else {
                    goto loop_17;
                }
            } else {
                M2C_FIELD(var_s4, s16 *, 0x1067A) = arg0;
                M2C_FIELD(temp_a0_3, s8 *, 6) = arg1;
                M2C_FIELD(temp_a0_3, s16 *, 2) = temp_s6;
                M2C_FIELD(temp_a0_3, s8 *, 4) = (s8) (M2C_FIELD(temp_s1, u8 *, 7) - M2C_FIELD(temp_s2, s8 *, 0xC));
                M2C_FIELD(temp_a0_3, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 7);
            }
        }
    }
}
