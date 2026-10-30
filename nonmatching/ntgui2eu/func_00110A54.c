/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
s32 func_0019B160(s32);                             /* extern */

void func_00110A54(void *arg0) {
    if (func_0019B160(M2C_FIELD(arg0, s32 *, 0x10)) < 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0019B140(M2C_FIELD(arg0, s32 *, 0x10));
}
