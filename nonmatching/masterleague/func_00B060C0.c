/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7920(void);
extern u32 func_00B06560(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_00960FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00B05F60();                            /* extern */

s32 func_00B060C0(void) {
    u32 temp_v0;

    temp_v0 = func_00B06560();
    if (temp_v0 != 0) {
        if (func_002F3850(M2C_FIELD(temp_v0, s32 *, 0x28)) == 2) {
            func_0026E840(0x84008401);
            func_00B05F60();
            func_00960FA0(1);
            func_001B7920();
        }
    }
    return 0;
}
