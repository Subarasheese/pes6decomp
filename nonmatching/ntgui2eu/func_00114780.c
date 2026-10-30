/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_001AE590(s32, s32, M2C_UNK);               /* extern */
extern char D_005F8648[];
extern char D_005F8700[];
extern char D_005F8710[];

void func_00114780(void *arg0) {
    u32 sp0;
    s32 *temp_v1_2;
    s32 temp_a1;
    s32 temp_s3;
    s32 var_a0;
    s32 var_s2;
    s32 var_s6;
    u32 temp_fp;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_s7;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_s4;
    void *temp_v1;

    temp_s4 = M2C_FIELD(arg0, void **, 4);
    temp_s1 = M2C_FIELD(arg0, void **, 0);
    sp0 = M2C_FIELD(temp_s4, u32 *, 0xC);
    temp_s3 = M2C_FIELD(temp_s1, u8 *, 0x52) & 0x7F;
    temp_fp = M2C_FIELD(temp_s4, u32 *, 4);
    if (temp_s1 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x7A8, ((void *)D_005F8700));
    }
    if (temp_s4 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x7A9, ((void *)D_005F8710));
    }
    var_s7 = 0;
    if (M2C_FIELD(temp_s1, u32 *, 0x68) != 0) {
        var_s6 = 0;
        do {
            if (M2C_FIELD((var_s6 + M2C_FIELD(temp_s1, s32 *, 0x78) + (temp_s3 * 0x30)), u16 *, 4) == 0) {
                var_s0 = 0;
                if (sp0 != 0) {
                    var_s2 = 0;
                    var_a0 = temp_s3 * 3;
loop_9:
                    temp_a1 = M2C_FIELD(temp_s4, s32 *, 8) + var_s2;
                    var_s2 += 0x28;
                    if (func_001AE590(var_s6 + (var_a0 * 0x10) + M2C_FIELD(temp_s1, s32 *, 0x78) + 8, temp_a1, 0xA) == 0) {
                        temp_v1 = var_s6 + M2C_FIELD(temp_s1, s32 *, 0x78);
                        M2C_FIELD(temp_v1, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x18C) | 4);
                    } else {
                        var_s0 += 1;
                        var_a0 = temp_s3 * 3;
                        if (var_s0 >= sp0) {
                            goto block_12;
                        }
                        goto loop_9;
                    }
                } else {
block_12:
                    var_s0_2 = 0;
                    if (temp_fp != 0) {
loop_13:
                        temp_a1_2 = var_s6 + M2C_FIELD(temp_s1, s32 *, 0x78);
                        temp_v1_2 = (var_s0_2 * 4) + M2C_FIELD(temp_s4, s32 *, 0);
                        var_s0_2 += 1;
                        if (M2C_FIELD((temp_a1_2 + (temp_s3 * 0x30)), u16 *, 4) == *temp_v1_2) {
                            M2C_FIELD(temp_a1_2, u8 *, 0x18C) = (u8) (M2C_FIELD(temp_a1_2, u8 *, 0x18C) | 4);
                        } else if (var_s0_2 < temp_fp) {
                            goto loop_13;
                        }
                    }
                }
            }
            var_s7 += 1;
            var_s6 += 0x198;
        } while (var_s7 < (u32) M2C_FIELD(temp_s1, u32 *, 0x68));
    }
}
