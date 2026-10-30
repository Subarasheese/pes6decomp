/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840560(s32);                             /* extern */
s32 func_008405F0(s32);                             /* extern */
s64 func_00840EC0();                                /* extern */
M2C_UNK func_0094BBF0(s64, s32, s32);               /* extern */

void func_00965A30(s32 arg0) {
    s32 temp_s0;
    s64 temp_s1;

    temp_s1 = (s64) (func_00840EC0() << 0x38) >> 0x38;
    temp_s0 = func_008405F0(arg0) & 0xFF;
    func_0094BBF0(temp_s1, func_00840560(arg0) & 0xFF, temp_s0);
}
