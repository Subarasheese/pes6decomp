/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00101E10(s32);                         /* extern */

s32 func_00102500(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        return (u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1;
    }
    func_00101E10(arg3);
    return 0;
}
