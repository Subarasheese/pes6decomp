/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019A4A8();                            /* extern */

void func_0019AA88(void *arg0) {
    func_0019A4A8();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 4) & ~1) | 0x100);
}
