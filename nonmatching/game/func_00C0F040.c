/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C10410(s32, s32);                    /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */

void func_00C0F040(s32 arg0, u8 *arg1) {
    s32 temp_s0;
    u8 temp_v1;

    if (arg0 == 1) {
        temp_v1 = *arg1;
        temp_s0 = ((s32) temp_v1 >> 5) & 1;
        func_00C10410(temp_s0, func_00C17E10(temp_s0, temp_v1 & 0x1F));
    }
}
