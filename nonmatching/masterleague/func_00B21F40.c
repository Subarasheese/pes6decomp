/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022BB90(s32);
extern u8 func_00227FC0(void);
void *func_0022BFF0(s32, s32);                      /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_00B21620(s32, s32, M2C_UNK, s32);      /* extern */

void func_00B21F40(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    func_00227FC0();
    temp_s0 = func_0022BFF0(arg0, arg1);
    if (((func_002307F0() & 0xFF) == 1) && (temp_s0 != NULL)) {
        var_s2 = 0;
        var_s3 = 0;
        var_s1 = 0;
        if (!(func_0022BB90((s32) M2C_FIELD(temp_s0, u8 *, 5)) & 0xFF)) {
            temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x16);
            if ((((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a0 << 0x38) >> 0x3F) == 0)) {
                var_s2 = M2C_FIELD(temp_s0, u8 *, 9) + M2C_FIELD(temp_s0, u8 *, 0xA);
                var_s1 = var_s2;
                var_s3 = M2C_FIELD(temp_s0, u8 *, 7) + M2C_FIELD(temp_s0, u8 *, 8);
            } else {
                var_a0 = 0;
                do {
                    temp_v0 = temp_s0 + var_a0;
                    temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x10);
                    var_s2 += temp_v1;
                    var_s3 += M2C_FIELD(temp_v0, u8 *, 0xB);
                    if (var_a0 < 4) {
                        var_s1 += temp_v1;
                    }
                    var_a0 += 1;
                } while (var_a0 < 5);
            }
        } else {
            temp_a0_2 = M2C_FIELD(temp_s0, u8 *, 0x16);
            if ((((u64) ((s64) temp_a0_2 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a0_2 << 0x38) >> 0x3F) == 0)) {
                var_s2 = M2C_FIELD(temp_s0, u8 *, 7) + M2C_FIELD(temp_s0, u8 *, 8);
                var_s1 = var_s2;
                var_s3 = M2C_FIELD(temp_s0, u8 *, 9) + M2C_FIELD(temp_s0, u8 *, 0xA);
            } else {
                var_a0_2 = 0;
                do {
                    temp_v0_2 = temp_s0 + var_a0_2;
                    temp_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 0xB);
                    var_s2 += temp_v1_2;
                    var_s3 += M2C_FIELD(temp_v0_2, u8 *, 0x10);
                    if (var_a0_2 < 4) {
                        var_s1 += temp_v1_2;
                    }
                    var_a0_2 += 1;
                } while (var_a0_2 < 5);
            }
        }
        func_00B21620(var_s2 & 0xFF, var_s3 & 0xFF, 0, var_s1 & 0xFF);
    }
}
