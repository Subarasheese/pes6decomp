/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
s32 func_00938F10(u16);                             /* extern */
M2C_UNK func_00B1B4F0(M2C_UNK, s32, u16, M2C_UNK);  /* extern */
M2C_UNK func_00B1BC00(s32);                         /* extern */
M2C_UNK func_00B1D610();                            /* extern */

void func_00B1BAF0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;
    u16 var_s3;
    void *temp_v0;

    temp_s1 = func_00225820() & 0xFF;
    var_s2 = 0;
    temp_s0 = temp_s1 << 5;
    do {
        if (temp_s1 >= 0x48) {
            var_s3 = 0;
        } else if ((var_s2 & 0xFF) >= 0x10) {
            var_s3 = 0;
        } else {
            temp_v0 = func_00228A80();
            if (temp_v0 == NULL) {
                var_s3 = 0;
            } else {
                var_s3 = M2C_FIELD((temp_s0 + temp_v0 + ((var_s2 & 0xFF) * 2)), u16 *, 0x325AE);
            }
        }
        if (temp_s1 != (func_00938F10(var_s3) & 0xFF)) {
            func_00B1B4F0(0xB, temp_s1, var_s3, 0);
        }
        var_s2 += 1;
    } while (var_s2 < 0x10);
    var_s0 = 0;
    do {
        func_00B1BC00(var_s0 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 0x48);
    func_00B1D610();
}
