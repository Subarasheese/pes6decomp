/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BA4480(s32);

void func_00BA5648(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00BA4480(arg0 + 0xC);
    func_00BA4480(arg0 + 0x20);
    func_00BA4480(arg0 + 0x34);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
