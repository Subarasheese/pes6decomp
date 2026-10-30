/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

void func_008CE230(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v1;
    u32 temp_v0;

    temp_v0 = func_008CC830();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xB4) == 0) {
            M2C_FIELD(temp_v0, s32 *, 0xB8) = 0;
            func_0026E840(0x8C008005);
            return;
        }
        if (arg0 <= 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xB8);
            if (temp_v1 != 0) {
                var_v1 = temp_v1 - 1;
            } else {
                var_v1 = arg1 - 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0xB8) = var_v1;
        } else {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xB8) + 1;
            M2C_FIELD(temp_v0, s32 *, 0xB8) = temp_a0;
            if (temp_a0 >= arg1) {
                M2C_FIELD(temp_v0, s32 *, 0xB8) = 0;
            }
        }
        func_0026E840(0x8400F802);
    }
}
