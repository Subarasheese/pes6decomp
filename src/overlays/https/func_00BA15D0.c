/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BA1638(void *, s32, s32, s32);
extern void func_00BA16A0(void *, s32, s32);

void func_00BA15D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00BA1638((void *)arg0, arg1, arg2, arg5);
    func_00BA16A0((void *)arg0, arg3, arg4);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8)(M2C_FIELD(arg0, u8 *, 0x16) | arg6);
}
