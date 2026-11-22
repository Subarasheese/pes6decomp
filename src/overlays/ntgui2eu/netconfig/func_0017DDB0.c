/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

extern void func_0017E090(void *);

void func_0017DDB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
    func_0017E090(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x538) == 0)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32(**)(void *), 0x110)(arg0);
    } else {
        M2C_FIELD(arg0, s64 *, 0xDC0) = (s64)M2C_FIELD(arg0, s64 *, 0xDA0);
        M2C_FIELD(arg0, s64 *, 0xDC8) = (s64)M2C_FIELD(arg0, s64 *, 0xDA8);
        return;
    }
}
