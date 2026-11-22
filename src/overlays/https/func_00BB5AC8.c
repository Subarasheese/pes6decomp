/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

M2C_UNK func_00BB47A0(s32);

void func_00BB5AC8(void *arg0) {
    func_00BB47A0(M2C_FIELD(arg0, s32 *, 4));
    func_00BB47A0(M2C_FIELD(arg0, s32 *, 8));
    func_00BB47A0(M2C_FIELD(arg0, s32 *, 0xC));
    func_001C48E8(arg0 + 0x18, 0, 0x40);
}
