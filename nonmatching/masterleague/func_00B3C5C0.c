/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B3D3D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B38AA0(s32);                         /* extern */
M2C_UNK func_00B39270(s32);                         /* extern */

s32 func_00B3C5C0(void) {
    s32 temp_v0_2;
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x114) == 0) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x58);
            if (temp_v0_2 != 0) {
                var_v0 = temp_v0_2 - 1;
            } else {
                var_v0 = M2C_FIELD(temp_v0, s32 *, 0x54) - 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0x58) = var_v0;
            func_00B39270(M2C_FIELD(temp_v0, s32 *, 0x58));
            func_0026E840(0x8400F802);
            func_00B38AA0(M2C_FIELD(temp_v0, s32 *, 0x58));
        }
    }
    return 0;
}
