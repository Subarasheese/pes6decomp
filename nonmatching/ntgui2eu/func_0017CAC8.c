/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017BE20(void *, s32);                 /* extern */
s32 func_00189798(s32);                             /* extern */

void func_0017CAC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x94C) = 0;
    if (func_00189798(arg0 + 0x950) != 0) {
        func_0017BE20(arg0, M2C_FIELD(arg0, s32 *, 0x948));
        return;
    }
    func_0017BE20(arg0, M2C_FIELD(arg0, s32 *, 0x948));
}
