/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
extern s32 func_002260F0(s32);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
void *func_00994750();                              /* extern */
s32 func_00B222D0();                                /* extern */
s32 func_00B22360();                                /* extern */
s32 func_00B459B0(void *, s64);                     /* extern */
M2C_UNK func_00B486C0(u32, s32, s32, M2C_UNK, void *); /* extern */

void func_00B48330(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_fp;
    s32 var_s2;
    s64 var_s1_2;
    s64 var_s1_3;
    s64 var_s1_4;
    s64 var_s5;
    u32 temp_v0;
    void *temp_s3;
    void *var_s1;
    void *var_s5_2;
    void *var_s5_3;
    void *var_s5_4;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        temp_s3 = func_00994750();
        var_fp = M2C_FIELD(func_002260F0((s32) M2C_FIELD(temp_v0, u8 *, 0x7BC)), s32 *, 0x34);
        if (var_fp >= 0xF423F) {
            var_fp = 0xF423F;
        }
        var_s2 = 0;
        var_s5 = 0;
        if ((s32) M2C_FIELD(temp_s3, u8 *, 0x619D6) > 0) {
            var_s1 = temp_s3;
loop_5:
            temp_s0 = var_s2 & 0xFF;
            if (temp_s0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C0)) {
                temp_v0_2 = func_00B459B0(temp_s3 + 0x6198C, (s64) (var_s5 << 0x30) >> 0x30);
                if (temp_v0_2 != 0) {
                    func_00B486C0(temp_v0, temp_v0_2, var_s2, 0, var_s1 + 0x6198C);
                    var_s2 = (var_s2 + 1) & 0xFF;
                    M2C_FIELD((temp_v0 + temp_s0), u8 *, 0x8DC) = (u8) M2C_FIELD(var_s1, u8 *, 0x6198C);
                }
                var_s5 += 1;
                var_s1 += 2;
                if (var_s5 >= (s32) M2C_FIELD(temp_s3, u8 *, 0x619D6)) {

                } else {
                    goto loop_5;
                }
            }
        }
        var_s1_2 = 0;
        if ((s32) M2C_FIELD(temp_s3, u8 *, 0x61A21) > 0) {
            var_s5_2 = temp_s3;
loop_12:
            temp_s0_2 = var_s2 & 0xFF;
            if (temp_s0_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C0)) {
                temp_v0_3 = func_00B459B0(temp_s3 + 0x619D7, (s64) (var_s1_2 << 0x30) >> 0x30);
                if (temp_v0_3 != 0) {
                    func_00B486C0(temp_v0, temp_v0_3, var_s2, 1, var_s5_2 + 0x619D7);
                    var_s2 = (var_s2 + 1) & 0xFF;
                    M2C_FIELD((temp_v0 + temp_s0_2), u8 *, 0x8DC) = (u8) M2C_FIELD(var_s5_2, u8 *, 0x619D7);
                }
                var_s1_2 += 1;
                var_s5_2 += 2;
                if (var_s1_2 >= (s32) M2C_FIELD(temp_s3, u8 *, 0x61A21)) {

                } else {
                    goto loop_12;
                }
            }
        }
        var_s1_3 = 0;
        if ((s32) M2C_FIELD(temp_s3, u8 *, 0x61A6C) > 0) {
            var_s5_3 = temp_s3;
loop_19:
            temp_s0_3 = var_s2 & 0xFF;
            if (temp_s0_3 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C0)) {
                temp_v0_4 = func_00B459B0(temp_s3 + 0x61A22, (s64) (var_s1_3 << 0x30) >> 0x30);
                if (temp_v0_4 != 0) {
                    func_00B486C0(temp_v0, temp_v0_4, var_s2, 3, var_s5_3 + 0x61A22);
                    var_s2 = (var_s2 + 1) & 0xFF;
                    M2C_FIELD((temp_v0 + temp_s0_3), u8 *, 0x8DC) = (u8) M2C_FIELD(var_s5_3, u8 *, 0x61A22);
                }
                var_s1_3 += 1;
                var_s5_3 += 2;
                if (var_s1_3 >= (s32) M2C_FIELD(temp_s3, u8 *, 0x61A6C)) {

                } else {
                    goto loop_19;
                }
            }
        }
        var_s1_4 = 0;
        if ((s32) M2C_FIELD(temp_s3, u8 *, 0x61AB7) > 0) {
            var_s5_4 = temp_s3;
loop_26:
            temp_s0_4 = var_s2 & 0xFF;
            if (temp_s0_4 < (s32) M2C_FIELD(temp_v0, u8 *, 0x7C0)) {
                temp_v0_5 = func_00B459B0(temp_s3 + 0x61A6D, (s64) (var_s1_4 << 0x30) >> 0x30);
                if (temp_v0_5 != 0) {
                    func_00B486C0(temp_v0, temp_v0_5, var_s2, 4, var_s5_4 + 0x61A6D);
                    var_s2 = (var_s2 + 1) & 0xFF;
                    M2C_FIELD((temp_v0 + temp_s0_4), u8 *, 0x8DC) = (u8) M2C_FIELD(var_s5_4, u8 *, 0x61A6D);
                }
                var_s1_4 += 1;
                var_s5_4 += 2;
                if (var_s1_4 >= (s32) M2C_FIELD(temp_s3, u8 *, 0x61AB7)) {

                } else {
                    goto loop_26;
                }
            }
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x398), 6, func_00B222D0());
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x39C), 8, func_00B22360());
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x3A0), 0xA, var_fp);
    }
}
