/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
s32 func_00225940(s32);                             /* extern */
u8 func_002323B0(u8, u8);                           /* extern */
s32 func_00235800(s32);                             /* extern */
extern s32 D_003E77B4;
extern void *D_003E7B0C;
extern void *D_003EAD3C;

void func_00AE7330(void) {
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s8 var_s1;
    u8 temp_a0;
    void *temp_s0;

    temp_s0 = D_003EAD3C;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x590) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x58C) = (u8) M2C_FIELD(((M2C_FIELD(D_003E7B0C, u8 *, 0x28) * 0xC) + D_003E77B4), u8 *, 0x4ABA);
        M2C_FIELD(temp_s0, u8 *, 0x58B) = func_002323B0(M2C_FIELD(D_003E7B0C, u8 *, 0x29), M2C_FIELD(D_003E7B0C, u8 *, 0x28));
        if ((s32) M2C_FIELD(((M2C_FIELD(D_003E7B0C, u8 *, 0x28) * 0xC) + D_003E77B4), u8 *, 0x4ABD) < 2) {
            M2C_FIELD(temp_s0, s8 *, 0x4DC) = 0;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x4DC) = 1;
        }
        temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x58B);
        if (((s32) temp_a0 % 2) != 1) {
            if ((s32) temp_a0 >= 2) {
                var_v0 = (s32) M2C_FIELD(temp_s0, u8 *, 0x58C) / (s32) (temp_a0 - 1);
                goto block_11;
            }
        } else {
            var_v0 = (s32) M2C_FIELD(temp_s0, u8 *, 0x58C) / (s32) temp_a0;
block_11:
            M2C_FIELD(temp_s0, s8 *, 0x58D) = (s8) var_v0;
        }
        M2C_FIELD(temp_s0, s8 *, 0x588) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x589) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x58A) = 0;
        var_s2 = func_00235800(func_00235B60() & 0xFF) & 0xFF;
        var_s1 = 0;
        var_s3 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x58B) > 0) {
loop_13:
            if (!(func_00225940(var_s2) & 0xFF)) {
                var_s3 = (var_s3 + 1) & 0xFF;
                var_s2 = (var_s2 + 1) & 0xFF;
                if (var_s3 < (s32) M2C_FIELD(temp_s0, u8 *, 0x58B)) {
                    goto loop_13;
                }
            } else {
                var_s1 = var_s3 & 0xFF;
            }
        }
        if (((s32) M2C_FIELD(temp_s0, u8 *, 0x58B) < 6) || ((var_s1 & 0xFF) < 0xA)) {
            M2C_FIELD(temp_s0, s8 *, 0x588) = var_s1;
        }
    }
}
