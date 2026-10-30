/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001669E0(void *);                      /* extern */
M2C_UNK func_00166A28();                            /* extern */
M2C_UNK func_00166B98(void *);                      /* extern */

void func_00166250(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) (M2C_FIELD(arg0, s32 *, 0x98) - 1);
    func_00166A28();
    func_00166B98(arg0);
    func_001669E0(arg0);
}
