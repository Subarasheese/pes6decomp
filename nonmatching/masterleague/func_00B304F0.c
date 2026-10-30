/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B30940(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B30090(s32);                         /* extern */

s32 func_00B304F0(void) {
    s32 var_v1;
    u32 temp_v0;
    u8 temp_v1;
    u8 var_a0;

    temp_v0 = func_00B30940();
    if (temp_v0 != 0) {
        var_a0 = M2C_FIELD(temp_v0, u8 *, 0x8C);
        if (var_a0 == 1) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x9A);
            if (temp_v1 != 0) {
                var_a0 = temp_v1 - 1;
                var_v1 = (s32) var_a0 % 3;
            } else {
                var_v1 = 2;
            }
            M2C_FIELD(temp_v0, u8 *, 0x9A) = (u8) var_v1;
            func_00B30090((s32) var_a0);
            func_0026E840(0x8400F803);
        }
    }
    return 0;
}
