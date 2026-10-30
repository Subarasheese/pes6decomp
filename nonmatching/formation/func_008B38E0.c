/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D3CB0(s32);                         /* extern */

void func_008B38E0(void *arg0) {
    func_008D3CB0(arg0 + 0x1D8C);
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
}
