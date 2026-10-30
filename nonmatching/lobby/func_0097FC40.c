/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00871580(s32, s32, s32, s32);              /* extern */

s32 func_0097FC40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == 0) {
        goto block_10;
    }
    if (arg0 >= 0) {
        if (arg0 < 9) {
            if (func_00871580(temp_v0 + (arg0 * 0x24), arg1, arg2, arg3) == 0) {
                return 1;
            }
            goto block_10;
        }
        return 0;
    }
block_10:
    return 0;
}
