/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B0B540(s32);                         /* extern */

s32 func_00B10D80(void) {
    s32 var_a0;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        var_a0 = M2C_FIELD(temp_v0, s32 *, 0xC44);
        switch (var_a0) {                           /* irregular */
        case 1:
            var_a0 = 0;
            break;
        case 0:
            var_a0 = 1;
            break;
        }
        M2C_FIELD(temp_v0, s32 *, 0xC44) = var_a0;
        func_00B0B540(var_a0);
        func_0026E840(0x8400F803);
    }
    return 0;
}
