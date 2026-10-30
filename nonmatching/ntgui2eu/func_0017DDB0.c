/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017E090();                            /* extern */

void func_0017DDB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
    func_0017E090();
    if (M2C_FIELD(arg0, s32 *, 0x538) == 0) {
        M2C_FIELD(arg0, s64 *, 0xDC0) = (s64) M2C_FIELD(arg0, s64 *, 0xDA0);
        M2C_FIELD(arg0, s64 *, 0xDC8) = (s64) M2C_FIELD(arg0, s64 *, 0xDA8);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x110)(arg0);
}
