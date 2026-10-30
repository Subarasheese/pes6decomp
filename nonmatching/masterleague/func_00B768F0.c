/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
s32 func_009492B0(s32, s32);                        /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
s8 func_0094DC80(s32, s32);                         /* extern */
extern void *D_003EAF00;

void func_00B768F0(void) {
    s32 temp_s1;
    s32 var_s3;
    void *temp_s0;
    void *temp_s4;
    void *var_s2;

    temp_s4 = D_003EAF00;
    if (temp_s4 != NULL) {
        temp_s1 = func_00225820() & 0xFF;
        var_s3 = 0;
        if ((s32) M2C_FIELD(temp_s4, u8 *, 0x7A1) > 0) {
            var_s2 = temp_s4;
            do {
                temp_s0 = temp_s4 + var_s3;
                M2C_FIELD(temp_s0, s8 *, 0x8D8) = func_0094DC80(temp_s1 & 0xFF, func_002243B0(temp_s1 & 0xFF, var_s3 & 0xFF) & 0xFF);
                if ((func_0094B400(func_009492B0(temp_s1 & 0xFF, var_s3 & 0xFF), temp_s1 & 0xFF) & 0xFF) == 1) {
                    M2C_FIELD(var_s2, s32 *, 0x918) = 6;
                    M2C_FIELD(temp_s0, s8 *, 0xB84) = 0;
                } else if ((func_0094B400(func_009492B0(temp_s1 & 0xFF, var_s3 & 0xFF), temp_s1 & 0xFF) & 0xFF) == 2) {
                    M2C_FIELD(var_s2, s32 *, 0x918) = 5;
                    M2C_FIELD(temp_s0, s8 *, 0xB84) = 0;
                } else {
                    M2C_FIELD(var_s2, s32 *, 0x918) = 0;
                }
                var_s3 += 1;
                var_s2 += 4;
            } while (var_s3 < (s32) M2C_FIELD(temp_s4, u8 *, 0x7A1));
        }
    }
}
