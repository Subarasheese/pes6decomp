/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00224700(u8, s32, u8);                 /* extern */
s32 func_00B1EA30();                                /* extern */
extern void *D_003EAD8C;

s32 func_00B1E260(void) {
    s32 var_s1;
    void *temp_s0;

    if (D_003EAD8C == NULL) {
        return 0;
    }
    if (func_00B1EA30() != 1) {
        return 0;
    }
    temp_s0 = D_003EAD8C;
    if (temp_s0 != NULL) {
        var_s1 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x2F9) > 0) {
            do {
                func_00224700(M2C_FIELD(temp_s0, u8 *, 0x2F8), var_s1, M2C_FIELD((temp_s0 + (var_s1 & 0xFF)), u8 *, 0x2FA));
                var_s1 = (var_s1 + 1) & 0xFF;
            } while (var_s1 < (s32) M2C_FIELD(temp_s0, u8 *, 0x2F9));
        }
    }
    return 1;
}
