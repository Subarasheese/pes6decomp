/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E4A8(void);
extern M2C_UNK (*D_005C14EC)();

void func_0017E7C0(void *arg0) {
    s64 temp_v0;
    s64 temp_v1;

    D_005C14EC();
    temp_v1 = M2C_FIELD(arg0, s64 *, 0xDA0);
    temp_v0 = M2C_FIELD(arg0, s64 *, 0xDA8);
    M2C_FIELD(arg0, s64 *, 0xDC0) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0xDC8) = temp_v0;
    M2C_FIELD(arg0, s64 *, 0xDB0) = temp_v1;
    M2C_FIELD(arg0, s64 *, 0xDB8) = temp_v0;
    func_0017E4A8();
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
}
