/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0083C5A0(s32, s32);
M2C_UNK func_0082B4C0(s32);                         /* extern */
s32 func_00836E20();                                /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_0083C740(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_00836E20();
    temp_s0 = func_00D0BAF0();
    func_0082B4C0(temp_s1);
    if (temp_s0 != 0) {
        return func_0083C5A0(temp_s1, arg0);
    }
    return 2;
}
