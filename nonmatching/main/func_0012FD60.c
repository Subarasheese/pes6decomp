/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_0012FD60(void *arg0, void *arg1) {
    f32 a, b, c;

    *(u32 *)&a = M2C_FIELD(arg1, u16 *, 0) | (M2C_FIELD(arg1, u16 *, 2) << 0x10);
    M2C_FIELD(arg0, f32 *, 0x10) = a;
    *(u32 *)&b = M2C_FIELD(arg1, u16 *, 4) | (M2C_FIELD(arg1, u16 *, 6) << 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = b;
    *(u32 *)&c = M2C_FIELD(arg1, u16 *, 8) | (M2C_FIELD(arg1, u16 *, 0xA) << 0x10);
    M2C_FIELD(arg0, f32 *, 0x18) = c;
    return (char *)arg1 + 0xC;
}
