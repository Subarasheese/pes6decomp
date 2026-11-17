/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00914CF0(void *, s32, s32, s32);

void func_0096B4A0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DA);
    if ((s32) temp_v1 < 0xFF) {
        M2C_FIELD(arg0, u8 *, 0x1DA) = (u8) (temp_v1 + 1);
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x1DB);
    if ((s32) temp_v0 > 0) {
        M2C_FIELD(arg0, u8 *, 0x1DB) = (u8) (temp_v0 - 1);
    }
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x203);
    if ((s32) temp_v0_2 > 0) {
        M2C_FIELD(arg0, u8 *, 0x203) = (u8) (temp_v0_2 - 1);
    }
    func_00914CF0(arg0, arg1, arg2, arg3);
}
