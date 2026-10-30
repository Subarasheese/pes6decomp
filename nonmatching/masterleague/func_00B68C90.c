/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_009492B0(s32, s32);                        /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
extern void *D_003EAEE8;

void func_00B68C90(void) {
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    void *temp_s4;
    void *var_s1;

    temp_s4 = D_003EAEE8;
    if (temp_s4 != NULL) {
        temp_s0 = func_00225820() & 0xFF;
        var_s3 = 0;
        if ((s32) M2C_FIELD(temp_s4, u8 *, 0x330C) > 0) {
            var_s1 = temp_s4;
            do {
                temp_s2 = func_009492B0(temp_s0 & 0xFF, var_s3 & 0xFF) & 0xFFFF;
                if ((func_0094B400(temp_s2, temp_s0 & 0xFF) & 0xFF) == 1) {
                    M2C_FIELD(var_s1, s32 *, 0x38E0) = 1;
                } else if ((func_0094B400(temp_s2, temp_s0 & 0xFF) & 0xFF) == 2) {
                    M2C_FIELD(var_s1, s32 *, 0x38E0) = 0;
                } else {
                    M2C_FIELD(var_s1, s32 *, 0x38E0) = 2;
                }
                var_s3 += 1;
                var_s1 += 4;
            } while (var_s3 < (s32) M2C_FIELD(temp_s4, u8 *, 0x330C));
        }
    }
}
