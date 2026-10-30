/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CB5D0(void *, u8);                  /* extern */
M2C_UNK func_008D02E0(s32);                         /* extern */

void func_008CCE60(void *arg0) {
    func_008D02E0(arg0 + 0x480);
    func_008CB5D0(arg0, M2C_FIELD(arg0, u8 *, 7));
}
