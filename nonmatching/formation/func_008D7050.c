/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
M2C_UNK func_008D6E10(u8);                          /* extern */

void func_008D7050(void *arg0) {
    func_008D6E10(M2C_FIELD(arg0, u8 *, 0x22));
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0x6C), 1U);
}
