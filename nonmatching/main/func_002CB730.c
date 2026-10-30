/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00154090(s64);                         /* extern */
M2C_UNK func_001540B0(s32, M2C_UNK);                /* extern */
s32 func_001540C0();                                /* extern */
M2C_UNK func_001540D0(s64);                         /* extern */

void func_002CB730(s64 arg0) {
    s64 temp_s0;

    func_001540B0(func_001540C0(), 0);
    temp_s0 = (s64) (arg0 << 0x38) >> 0x38;
    func_00154090(temp_s0);
    func_001540D0(temp_s0);
}
