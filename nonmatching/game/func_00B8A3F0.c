/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
void *func_00C375E0(u8);                            /* extern */
s32 func_00C376A0(u8);                              /* extern */
s32 func_00C37760(u8, s32);                         /* extern */
M2C_UNK func_00C377F0(u8, void **, s32, u16);       /* extern */

void func_00B8A3F0(void **arg0) {
    s16 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u8 temp_s0;
    u8 temp_s5;
    u8 var_s2;
    void **temp_fp;
    void **temp_v0;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B2A420(func_00BF6270());
    temp_fp = temp_v0;
    temp_v0_2 = *arg0;
    temp_s5 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), u8 *, 0x54);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    if (temp_s5 != 0) {
        if (func_00C376A0(temp_s5) == 0) {
            var_s4 = 0;
            temp_v0_3 = func_00C375E0(temp_s5);
            var_s2 = M2C_FIELD(*arg0, u8 *, 0);
            var_s3 = 1;
            if ((s32) M2C_FIELD(temp_v0_3, u8 *, 8) >= 2) {
                var_s1 = 0x14;
loop_8:
                temp_s0 = func_00C37760(temp_s5, var_s3) & 0xFF;
                if (temp_s0 != 0xFF) {
                    if (M2C_FIELD(*func_00B2A420(temp_s0), u16 *, 0x18) == 0xD1) {
                        temp_a0 = M2C_FIELD(temp_fp, void **, 0);
                        if ((u32) M2C_FIELD((temp_a0 + ((var_s2 & 0xFF) * 4)), u32 *, 0x158) < (u32) M2C_FIELD((temp_a0 + ((temp_s0 & 0xFF) * 4)), u32 *, 0x158)) {
                            var_s4 = 1;
                        }
                    }
                } else {
                    var_s4 = 1;
                }
                if (var_s4 == 0) {
                    goto block_13;
                }
                func_00C377F0(temp_s5, func_00B2A420(var_s2 & 0xFF), var_s3, M2C_FIELD((M2C_FIELD(temp_v0_3, s32 *, 0) + var_s1), u16 *, 0x10));
                var_s2 = temp_s0 & 0xFF;
                if (temp_s0 != 0xFF) {
block_13:
                    var_s3 += 1;
                    var_s1 += 0x14;
                    if (var_s3 >= (s32) M2C_FIELD(temp_v0_3, u8 *, 8)) {

                    } else {
                        goto loop_8;
                    }
                }
            }
            func_00BD3BA0(arg0, 5, 0);
            var_a0 = 0xD1;
        } else {
            goto block_3;
        }
    } else {
block_3:
        var_a0 = 9;
    }
    M2C_FIELD(*arg0, s16 *, 0x18) = var_a0;
}
