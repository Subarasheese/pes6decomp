/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_009931B0(s32, s32, s32, s32);          /* extern */
s32 func_00B71B40(u8);                              /* extern */

s32 func_00B70AE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_v0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) != 1) {
                func_009931B0(arg0, arg1, arg2, arg3);
            }
        }
    }
    return 0;
}
