/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern void func_00BB5098(s32, s32, s32);

extern s32 D_00C405F8;

void func_00BDDAE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_s1;

    temp_s1 = arg0 + 0x2C;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xA;
    func_001C48E8(temp_s1, 0, 8);
    func_00BB5098(D_00C405F8, arg0, (s32)temp_s1);
}
