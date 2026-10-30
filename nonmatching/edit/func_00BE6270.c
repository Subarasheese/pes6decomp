/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
extern s32 func_00221A60(s32);
extern void func_00222E80(int, int, u16);
M2C_UNK func_00221BC0(s32, s32, M2C_UNK, s32);      /* extern */
s32 func_00BC59F0(s32, s32, M2C_UNK);               /* extern */
void *func_00BC5AA0(s32, s32, M2C_UNK);             /* extern */
s32 func_00BC5DF0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BC5ED0();                                /* extern */

void func_00BE6270(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2_2;
    s32 temp_s6;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s1;
    u16 temp_s2;
    u16 temp_s3;
    u64 temp_fp;
    u64 var_s7;

    var_s4 = arg1;
    if (func_00BC5ED0() != 0) {
        if (var_s4 < 0x10) {
            temp_fp = (u64) ((s64) M2C_FIELD(func_00BC5AA0(arg0, var_s4 & 0xFF, 1), u8 *, 1) << 0x38) >> 0x3C;
            var_s7 = temp_fp;
loop_11:
            temp_s6 = func_00221A60(arg0) & 0xFF;
            var_s3 = 0xB;
            if ((temp_s6 - 1) >= 0xB) {
loop_12:
                if (((u64) ((s64) M2C_FIELD(Pes6Player_GetParams(func_00BC5DF0(arg0, var_s3 & 0xFF, 0) & 0xFFFF), u8 *, 1) << 0x38) >> 0x3C) == var_s7) {
                    temp_s1 = func_00BC5DF0(arg0, var_s3 & 0xFF, 0) & 0xFFFF;
                    if (temp_s1 == 0) {
                        var_v1 = 0;
                    } else {
                        temp_s0 = func_00BC59F0(arg0, var_s3 & 0xFF, 0) & 0xFF;
                        func_00221BC0(arg0, var_s3 & 0xFF, 1, 0xFF);
                        func_00221BC0(arg0, var_s4 & 0xFF, 1, temp_s0 & 0xFF);
                        func_00222E80(arg0, var_s3 & 0xFF, 0U);
                        func_00222E80(arg0, var_s4 & 0xFF, temp_s1);
                        var_v1 = 1;
                    }
                    if (var_v1 != 0) {
                        if (var_s3 < (temp_s6 - 1)) {
                            do {
                                temp_s1_2 = var_s3 + 1;
                                temp_s2 = func_00BC5DF0(arg0, temp_s1_2 & 0xFF, 0) & 0xFFFF;
                                if (temp_s2 != 0) {
                                    temp_s0_2 = func_00BC59F0(arg0, temp_s1_2 & 0xFF, 0) & 0xFF;
                                    func_00221BC0(arg0, temp_s1_2 & 0xFF, 1, 0xFF);
                                    func_00221BC0(arg0, var_s3 & 0xFF, 1, temp_s0_2 & 0xFF);
                                    func_00222E80(arg0, temp_s1_2 & 0xFF, 0U);
                                    func_00222E80(arg0, var_s3 & 0xFF, temp_s2);
                                }
                                var_s3 += 1;
                            } while (var_s3 < (temp_s6 - 1));
                        }
                        var_v1_2 = 1;
                    } else {
                        goto block_23;
                    }
                } else {
block_23:
                    var_s3 += 1;
                    if ((temp_s6 - 1) < var_s3) {
                        goto block_25;
                    }
                    goto loop_12;
                }
            } else {
block_25:
                var_v1_2 = 0;
            }
            if (var_v1_2 == 0) {
                var_s7 = (u64) ((s32) (var_s7 + 1) % 13);
                if (temp_fp != var_s7) {
                    goto loop_11;
                }
            }
        } else {
            temp_s0_3 = func_00221A60(arg0) & 0xFF;
            if (var_s4 < (temp_s0_3 - 1)) {
                do {
                    temp_s2_2 = var_s4 + 1;
                    temp_s3 = func_00BC5DF0(arg0, temp_s2_2 & 0xFF, 0) & 0xFFFF;
                    if (temp_s3 != 0) {
                        temp_s1_3 = func_00BC59F0(arg0, temp_s2_2 & 0xFF, 0) & 0xFF;
                        func_00221BC0(arg0, temp_s2_2 & 0xFF, 1, 0xFF);
                        func_00221BC0(arg0, var_s4 & 0xFF, 1, temp_s1_3 & 0xFF);
                        func_00222E80(arg0, temp_s2_2 & 0xFF, 0U);
                        func_00222E80(arg0, var_s4 & 0xFF, temp_s3);
                    }
                    var_s4 += 1;
                } while (var_s4 < (temp_s0_3 - 1));
            }
        }
    }
}
