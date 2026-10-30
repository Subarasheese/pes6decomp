/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00229010(s32);                             /* extern */
s32 func_00236680(u8);                              /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;

void func_0098D0F0(void) {
    s32 temp_a1;
    s32 temp_s0_2;
    s32 var_s2;
    s8 var_s1;
    u8 temp_s0;
    u8 temp_s3;
    u8 temp_s3_2;

    temp_s0 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_a1 = func_00236680(temp_s0) & 0xFF;
    temp_s0_2 = (temp_s0 & 0xFF) * 0xC;
    var_s2 = 0;
    if ((s32) M2C_FIELD((temp_s0_2 + D_003E77B4), u8 *, 0x4AC1) > 0) {
        var_s1 = temp_a1 & 0xFF;
        do {
            temp_s3 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
            if (temp_s3 == (func_00229010(var_s1 & 0xFF) & 0xFF)) {
                M2C_FIELD(D_003E77B4, s8 *, 0x16F2) = var_s1;
            } else {
                temp_s3_2 = M2C_FIELD(D_003E77B0, u8 *, 0x2D);
                if (temp_s3_2 == (func_00229010(var_s1 & 0xFF) & 0xFF)) {
                    M2C_FIELD(D_003E77B4, s8 *, 0x16F3) = var_s1;
                }
            }
            var_s2 += 1;
            var_s1 += 1;
        } while (var_s2 < (s32) M2C_FIELD((temp_s0_2 + D_003E77B4), u8 *, 0x4AC1));
    }
}
