/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CB190();                            /* extern */
M2C_UNK func_008D0430(void *, u8);                  /* extern */

void func_008CCE20(void *arg0) {
    func_008CB190();
    func_008D0430(arg0 + 0x480, M2C_FIELD(arg0, u8 *, 3));
}
