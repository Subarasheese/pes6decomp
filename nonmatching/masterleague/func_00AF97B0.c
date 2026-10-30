/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
s32 func_00151EA0(s32);                             /* extern */
s32 func_00B02A20(s32);                             /* extern */

s32 func_00AF97B0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    if (func_00226E70() != 1) {
        var_v0 = (func_00151EA0(5) & 0xFFFF) + 1;
        goto block_13;
    }
    temp_v1 = func_00B02A20(arg0) & 0xFF;
    if (temp_v1 < 0x23) {
        if (temp_v1 < 0x1F) {
            var_v0 = (func_00151EA0(5) & 0xFFFF) + 1;
        } else {
            var_v0 = (func_00151EA0((0x24 - temp_v1) & 0xFF) & 0xFFFF) + 1;
        }
block_13:
        return var_v0 & 0xFF;
    }
    return 1;
}
