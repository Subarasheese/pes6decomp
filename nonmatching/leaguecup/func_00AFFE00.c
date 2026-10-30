/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern u8 func_00225820(void);
extern s32 func_00226710(void);
extern void *D_003EAD54;

void func_00AFFE00(void) {
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    u8 temp_s0;
    u8 temp_s2;
    u8 temp_s3_2;
    void *temp_s3;

    temp_s3 = D_003EAD54;
    if (temp_s3 != NULL) {
        temp_s0 = M2C_FIELD(temp_s3, u8 *, 0x29F7C);
        temp_s2 = M2C_FIELD((((M2C_FIELD(temp_s3, u8 *, 0x5C7) + M2C_FIELD(temp_s3, u8 *, 0x5D0)) * 0x1C) + temp_s3), u8 *, 0xA18);
        if (temp_s3 == NULL) {
            goto block_15;
        }
        if ((func_00226710() & 0xFF) != 0x2C) {
            if ((func_00226710() & 0xFF) != 0x38) {
                var_v0 = 0x12;
            } else {
                goto block_7;
            }
        } else {
block_7:
            var_v0 = 0x17;
        }
        temp_a0 = var_v0 & 0xFF;
        var_a1 = 0;
        if (temp_a0 > 0) {
loop_10:
            var_a2 = var_a1 & 0xFF;
            if ((temp_s0 & 0xFF) != M2C_FIELD((temp_s3 + (var_a2 * 0x1C)), u16 *, 0xA18)) {
                var_a1 = (var_a1 + 1) & 0xFF;
                if (var_a1 >= temp_a0) {
                    goto block_15;
                }
                goto loop_10;
            }
        } else {
block_15:
            var_a2 = -1;
        }
        temp_s1 = var_a2 & 0xFF;
        temp_s3_2 = M2C_FIELD(temp_s3, u8 *, 0x29F7C);
        temp_s0_2 = (M2C_FIELD(temp_s3, u8 *, 0x5C7) + M2C_FIELD(temp_s3, u8 *, 0x5D0)) & 0xFF;
        func_00225820();
        func_002260F0(func_00225820());
        if (D_003EAD54 != NULL) {
            M2C_FIELD((((temp_s0_2 & 0xFF) * 0x1C) + D_003EAD54), s16 *, 0xA18) = (s16) (temp_s3_2 & 0xFF);
        }
        if ((temp_s1 & 0xFF) != 0xFF) {
            func_00225820();
            func_002260F0(func_00225820());
            if (D_003EAD54 != NULL) {
                M2C_FIELD((((temp_s1 & 0xFF) * 0x1C) + D_003EAD54), s16 *, 0xA18) = (s16) (temp_s2 & 0xFF);
            }
        }
    }
}
