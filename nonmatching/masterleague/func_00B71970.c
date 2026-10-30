/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
extern void func_001BC300(void);
s32 func_00993A60();                                /* extern */
s32 func_0099FD60();                                /* extern */
s32 func_00B71B40(u8);                              /* extern */

s32 func_00B71970(void) {
    u32 temp_v0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) == 1) {
                if (func_0099FD60() != 2) {

                } else {
                    goto block_13;
                }
            } else if (func_00993A60() != 2) {

            } else {
block_13:
                M2C_FIELD(temp_v0, u8 *, 0x10) = 7U;
                func_001BC300();
            }
        }
    }
    return 0;
}
