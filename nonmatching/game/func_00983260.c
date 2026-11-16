/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_009143D0(void *, s32, s32, s32);

void func_00983260(void *arg0, u8 arg1, s32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, u8 *, 0x1DD) != (arg1 & 0xFF)) {
        M2C_FIELD(arg0, u8 *, 0x1DD) = arg1;
        M2C_FIELD(arg0, s8 *, 0x1DE) = 0;
        func_009143D0(arg0, 0, 1, arg3);
    }
}
