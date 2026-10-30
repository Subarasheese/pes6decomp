/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */

s32 func_00BE5BB0(void) {
    func_00B91440(0xC);
    func_00B91440(0x1E);
    func_001B6670();
    func_00BC3FB0(0);
    return 1;
}
