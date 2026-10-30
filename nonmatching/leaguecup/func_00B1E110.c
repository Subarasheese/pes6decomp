/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s8 func_002249A0(s32, s32);                         /* extern */
s32 func_00224BC0(s32, s8);                         /* extern */
extern void *D_003EAD8C;

void func_00B1E110(void) {
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s1_2;
    s8 var_s1;
    u8 temp_v0;
    void *temp_s0;

    temp_s0 = D_003EAD8C;
    if (temp_s0 != NULL) {
        temp_v0 = func_00225820();
        M2C_FIELD(temp_s0, u8 *, 0x2F8) = temp_v0;
        temp_s2 = temp_v0 & 0xFF;
        var_s1 = 0;
loop_2:
        if (func_00224BC0(temp_s2, var_s1) & 0xFFFF) {
            var_s1 = (var_s1 + 1) & 0xFF;
            if (var_s1 >= 0x20) {

            } else {
                goto loop_2;
            }
        }
        M2C_FIELD(temp_s0, s8 *, 0x2F9) = var_s1;
        var_s1_2 = 0;
        do {
            temp_s3 = var_s1_2 & 0xFF;
            if (temp_s3 >= (s32) (u8) M2C_FIELD(temp_s0, s8 *, 0x2F9)) {
                M2C_FIELD((temp_s0 + temp_s3), s8 *, 0x2FA) = 0xFF;
            } else {
                M2C_FIELD((temp_s0 + temp_s3), s8 *, 0x2FA) = func_002249A0(temp_s2, var_s1_2);
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFF;
        } while (var_s1_2 < 0x20);
        M2C_FIELD(temp_s0, s16 *, 0x32A) = 5;
        M2C_FIELD(temp_s0, s32 *, 0x32C) = 1;
    }
}
