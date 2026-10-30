/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
void **func_00B2A420(s32);                          /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */
s32 func_00B8B4F0(void *);                          /* extern */
s32 func_00C36F20(u8, M2C_UNK);                     /* extern */
M2C_UNK func_00C36F50(u8, M2C_UNK, s32);            /* extern */
void *func_00C375E0(u8);                            /* extern */
s32 func_00C376A0(u8);                              /* extern */
M2C_UNK func_00C376D0(u8);                          /* extern */
s32 func_00C37700(u8);                              /* extern */
s32 func_00C37760(u8, s32);                         /* extern */

void func_00B8AC70(void *arg0) {
    s32 temp_fp;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_s7;
    s32 temp_v0_5;
    s32 var_s1_2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3_2;
    u16 var_s1;
    u16 var_s2;
    u16 var_s3;
    u16 var_s6;
    u16 var_s7;
    u8 temp_a0;
    void **temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_00C375E0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    var_s3 = 0;
    var_s1 = 0;
    var_s2 = 0;
    var_s6 = 0;
    func_00B2ACF0(arg0);
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 8);
    temp_s4 = func_00C37700(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)) - 3;
    if (temp_s4 < (s32) temp_a0) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 4) + (temp_s4 * 0xA);
        var_s3 = M2C_FIELD(temp_v0, u16 *, 0);
        var_s1 = M2C_FIELD(temp_v0, u16 *, 2);
        var_s2 = M2C_FIELD(temp_v0, u16 *, 4);
        var_s6 = M2C_FIELD(temp_v0, u16 *, 6);
    }
    if (((temp_s4 + 1) < (s32) temp_a0) && (temp_s4 == (func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 0) & 0xFF))) {
        temp_fp = temp_s4 * 0x14;
        var_s7 = M2C_FIELD((temp_fp + M2C_FIELD(temp_s0, u16 **, 0)), u16 *, 0x22);
        if ((s32) var_s7 >= (s32) var_s3) {
            if (func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 2) == 0) {
                var_s7 = var_s3;
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x38) < (f32) var_s7)) {
            temp_v0_2 = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), temp_s4) & 0xFF);
            if ((temp_s4 != 0) && (M2C_FIELD(((temp_s4 * 0xA) + M2C_FIELD(temp_s0, s32 *, 4)), u8 *, 8) != 0)) {
                if (!(M2C_FIELD(M2C_FIELD(*temp_v0_2, void **, 4), f32 *, 0x38) < (f32) (var_s3 - M2C_FIELD((temp_fp + M2C_FIELD(temp_s0, u16 **, 0)), u16 *, 0xE)))) {
                    goto block_12;
                }
            } else {
block_12:
                func_00C36F50(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 0, (temp_s4 + 1) & 0xFF);
            }
        }
    }
    if (func_00C376A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)) != 0) {
        if (var_s2 != 0) {
            if ((func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) var_s2) != 0) && (func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), *M2C_FIELD(temp_s0, u16 **, 0), var_s6 & 0xFFFF), var_s3_2 = 1, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2, (temp_s4 > 0))) {
                var_s2_2 = 0x14;
                do {
                    temp_v0_3 = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), var_s3_2) & 0xFF);
                    temp_a0_2 = M2C_FIELD(*temp_v0_3, void **, 4);
                    func_00209A00(temp_a0_2, M2C_FIELD(temp_a0_2, u16 *, 0x30), (var_s6 - M2C_FIELD((M2C_FIELD(temp_s0, u16 **, 0) + var_s2_2), u16 *, 0xE)) & 0xFFFF);
                    func_00207390(M2C_FIELD(*temp_v0_3, s32 *, 4), 0xA);
                    var_s3_2 += 1;
                    var_s2_2 += 0x14;
                } while (temp_s4 >= var_s3_2);
            }
        } else if (func_00B8B4F0(arg0) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2;
        }
    } else if ((temp_s4 + 1) < (s32) M2C_FIELD(temp_s0, u8 *, 8)) {
        if (var_s3 == 0) {
            goto block_21;
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) var_s3) == 0) {
block_21:
            if ((var_s1 != 0) && (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), (s32) var_s1) != 0)) {
                goto block_23;
            }
            return;
        }
block_23:
        temp_s7 = func_00C36F20(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 1) & 0xFF;
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        func_00209A00(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x30), var_s3 & 0xFFFF);
        var_s1_2 = 1;
        if (temp_s4 > 0) {
            var_s2_3 = 0x14;
            do {
                temp_v0_4 = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), var_s1_2) & 0xFF);
                temp_a0_4 = M2C_FIELD(*temp_v0_4, void **, 4);
                temp_v0_5 = var_s3 - M2C_FIELD((M2C_FIELD(temp_s0, u16 **, 0) + var_s2_3), u16 *, 0xE);
                if (!(M2C_FIELD(temp_a0_4, f32 *, 0x38) <= (f32) temp_v0_5)) {
                    func_00209A00(temp_a0_4, M2C_FIELD(temp_a0_4, u16 *, 0x30), temp_v0_5 & 0xFFFF);
                    func_00207390(M2C_FIELD(*temp_v0_4, s32 *, 4), 0xA);
                }
                var_s1_2 += 1;
                var_s2_3 += 0x14;
            } while (temp_s4 >= var_s1_2);
        }
        temp_s0_2 = temp_s7 + 1;
        if (temp_s0_2 >= 3) {
            func_00C376D0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
        }
        func_00C36F50(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 1, temp_s0_2 & 0xFF);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xD2;
    }
}
