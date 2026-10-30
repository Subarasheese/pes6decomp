/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B040(s32);                         /* extern */
s32 func_0019F300(s32);                             /* extern */
M2C_UNK func_0019F358(s32);                         /* extern */

void func_0019F520(s32 arg0) {
    s32 temp_v0;

loop_3:
    temp_v0 = func_0019F300(arg0);
    if (temp_v0 != 0) {
        func_0019F358(temp_v0);
        goto loop_3;
    }
    func_0019B040(temp_v0);
    goto loop_3;
}
