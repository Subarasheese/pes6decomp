/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00148690(s32, u8 *, s32, s32);

void func_00147F90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    buf[0] = arg1;
    buf[1] = arg2;
    func_00148690(arg0, buf, arg2, arg3);
}
