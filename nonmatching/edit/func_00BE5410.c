/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
s64 func_00BF3F90(M2C_UNK);                         /* extern */
M2C_UNK func_00BF4370(M2C_UNK);                     /* extern */
M2C_UNK func_00BF4A90(u16, s32);                    /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */

s32 func_00BE5410(void *arg0) {
    s32 var_a1;
    s32 var_s1;
    s64 temp_s0;

    temp_s0 = (s64) (func_00BF3F90(1) << 0x30) >> 0x30;
    if (temp_s0 >= 2) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0xC);
        if (func_00BCF3A0(0x80) == 0) {
            if (func_00BCF3A0(0x400) != 0) {
                var_s1 += 1;
            }
        } else {
            var_s1 -= 1;
        }
        var_a1 = temp_s0 - 1;
        if (var_a1 < var_s1) {
            var_a1 = 0;
        } else if (var_s1 >= 0) {
            var_a1 = var_s1;
        }
        if (var_a1 == M2C_FIELD(arg0, s32 *, 0xC)) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = var_a1;
        func_00BF4A90(M2C_FIELD(arg0, u16 *, 8), var_a1);
        func_00BF4370(1);
        func_00C1B420(1);
        func_00B91590(0x19, 1);
        func_00BE6F80();
        func_00B91590(0x19, 1);
        func_0026E840(0x8400F803);
        return 1;
    }
    return 0;
}
