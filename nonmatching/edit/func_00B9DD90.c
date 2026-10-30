/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B92210(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *func_00B9C490();                              /* extern */

void func_00B9DD90(void) {
    M2C_FIELD(func_00B9C490(), s32 *, 4) = 0x61;
    func_00B92210(0, 1, 1);
}
