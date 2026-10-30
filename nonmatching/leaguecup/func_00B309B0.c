/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B19FD0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00B1AA10(s32);                         /* extern */
extern s32 D_003EADA0;

void func_00B309B0(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    s32 var_v0;
    void *temp_s0;

    temp_s1 = D_003EADA0;
    if (temp_s1 != 0) {
        var_s3 = 0;
        do {
            temp_s0 = temp_s1 + ((var_s3 & 0xFF) * 0x48);
            temp_s2 = temp_s0 + 0x60;
            func_00B1AA10(temp_s2);
            if (!(var_s3 & 0xFF)) {
                var_v0 = 2;
            } else {
                var_v0 = 3;
            }
            M2C_FIELD(temp_s0, s32 *, 0x98) = var_v0;
            func_00B19FD0(temp_s2, 1, 1);
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 2);
    }
}
