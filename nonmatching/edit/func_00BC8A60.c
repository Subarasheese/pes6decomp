/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00266420(int);
M2C_UNK func_00BCC630();                            /* extern */
M2C_UNK func_00BCC660(s32, s32);                    /* extern */

void func_00BC8A60(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    func_00BCC630();
    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 < 0xCC) || (temp_a0 == 0x126)) {
        func_00266420(arg2);
        func_00BCC660(arg0, arg1);
    }
}
