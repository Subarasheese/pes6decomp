/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E8F10(s32, s32);                    /* extern */
M2C_UNK func_008E9080(s32);                         /* extern */

void func_008E82C0(s8 *arg0, s32 arg1) {
    u32 temp_hi;

    func_008E9080(arg0 + 4);
    temp_hi = (u32) (arg1 & 0xFF) % 12U;
    *arg0 = (s8) temp_hi;
    func_008E8F10(arg0 + 4, temp_hi & 0xFF);
}
