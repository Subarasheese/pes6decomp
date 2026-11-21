/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void func_00BEBCD8(s32, s32, s32, s32, s32);

void func_00BE9328(s32 arg0, s32 arg1) {
    func_00BEBCD8(0x30, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), arg1, arg1 + 4);
}
