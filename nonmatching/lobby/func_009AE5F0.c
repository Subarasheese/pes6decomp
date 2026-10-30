/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001DE9D0(void);
extern s32 func_001DEF10(void *);
extern s32 func_001DE450(s32, s32, s32);
extern s32 func_001F08B0(s32);
extern void func_001DE9E0(int);
s32 func_0093AEA0(s32);                             /* extern */
s32 func_0093AF00(s32);                             /* extern */
M2C_UNK func_009AEC60(void *, s32);                 /* extern */
extern void *D_00A7DBF8;

void func_009AE5F0(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 temp_a1;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    void *temp_s0;
    void *temp_s1;
    void *var_s1;

    var_s3 = 0;
    var_s2 = 0;
    var_s1 = arg0;
loop_1:
    if (M2C_FIELD(arg0, s32 *, 0x654) >= (var_s3 + 1)) {
        func_009AEC60(arg0, var_s3);
        M2C_FIELD(var_s1, s32 *, 0x670) = (s32) (var_s2 + 6);
        M2C_FIELD(var_s1, s32 *, 0x6D0) = var_s3;
        temp_s0 = D_00A7DBF8;
        temp_s5 = (M2C_FIELD(arg0, s32 *, 0x654) - var_s3) - 1;
        temp_s6 = func_001DE9D0();
        func_001DE9E0(5);
        if (func_0093AEA0(temp_s5) == 0) {
            if (func_0093AF00(temp_s5) != 0) {
                temp_s5_2 = func_0093AF00(temp_s5);
                temp_v0 = func_001DEF10(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x58), void **, 0xC));
                temp_f1 = M2C_FIELD(temp_s0, f32 *, 0x668);
                if (temp_f1 >= 2.1474836e9f) {
                    var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2 = (s32) temp_f1;
                }
                var_s0 = (func_001DE450(temp_s5_2, temp_v0, var_a2 & 0xFFFF) & 0xFF) + 2;
            } else {
                var_s0 = 3;
            }
        } else {
            temp_s5_3 = func_001F08B0(0x020D0038);
            temp_v0_2 = func_001DEF10(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x58), void **, 0xC));
            temp_f1_2 = M2C_FIELD(temp_s0, f32 *, 0x668);
            if (temp_f1_2 >= 2.1474836e9f) {
                var_a2_2 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
            } else {
                var_a2_2 = (s32) temp_f1_2;
            }
            var_s0 = (func_001DE450(temp_s5_3, temp_v0_2, var_a2_2 & 0xFFFF) & 0xFF) + 2;
        }
        func_001DE9E0(temp_s6);
        var_s2 += var_s0;
        temp_a1 = var_s2 + 6;
        if (temp_a1 < 0x18) {
            var_s3 += 1;
            var_s1 += 4;
            if (var_s3 < 0x18) {
                goto loop_1;
            }
        } else {
            M2C_FIELD(((var_s3 * 4) + arg0), s32 *, 0x674) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0x65C) = (s32) (var_s3 + 1);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x65C) = var_s3;
    }
    M2C_FIELD(arg0, s32 *, 0x734) = 0;
    var_s2_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x654) > 0) {
        do {
            temp_s1 = D_00A7DBF8;
            temp_s0_2 = (M2C_FIELD(arg0, s32 *, 0x654) - var_s2_2) - 1;
            temp_s3 = func_001DE9D0();
            func_001DE9E0(5);
            if (func_0093AEA0(temp_s0_2) == 0) {
                if (func_0093AF00(temp_s0_2) != 0) {
                    temp_s0_3 = func_0093AF00(temp_s0_2);
                    temp_v0_3 = func_001DEF10(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x58), void **, 0xC));
                    temp_f1_3 = M2C_FIELD(temp_s1, f32 *, 0x668);
                    if (temp_f1_3 >= 2.1474836e9f) {
                        var_a2_3 = (s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
                    } else {
                        var_a2_3 = (s32) temp_f1_3;
                    }
                    var_s0_2 = (func_001DE450(temp_s0_3, temp_v0_3, var_a2_3 & 0xFFFF) & 0xFF) + 2;
                } else {
                    var_s0_2 = 3;
                }
            } else {
                temp_s0_4 = func_001F08B0(0x020D0038);
                temp_v0_4 = func_001DEF10(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x58), void **, 0xC));
                temp_f1_4 = M2C_FIELD(temp_s1, f32 *, 0x668);
                if (temp_f1_4 >= 2.1474836e9f) {
                    var_a2_4 = (s32) (temp_f1_4 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2_4 = (s32) temp_f1_4;
                }
                var_s0_2 = (func_001DE450(temp_s0_4, temp_v0_4, var_a2_4 & 0xFFFF) & 0xFF) + 2;
            }
            func_001DE9E0(temp_s3);
            var_s2_2 += 1;
            M2C_FIELD(arg0, s32 *, 0x734) = (s32) (M2C_FIELD(arg0, s32 *, 0x734) + var_s0_2);
        } while (var_s2_2 < M2C_FIELD(arg0, s32 *, 0x654));
    }
}
