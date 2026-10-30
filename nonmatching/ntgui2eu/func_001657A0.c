/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001657E8();                            /* extern */

void func_001657A0(M2C_UNK arg0, s32 *arg1, s32 *arg2) {
    func_001657E8();
    *arg1 = (s32) *arg1 >> 4;
    *arg2 = (s32) *arg2 >> 4;
}
