/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_002C2FA0(s32, u8 *, s32);
extern s32 func_009A0270(void);
extern s32 D_00591E0C;
extern u8 D_00591F13;
extern s32 D_005E3600;

void func_002C2EF0(s32 a0, s32 a1, s32 a2) {
    u32 sp2C = 0;
    s32 var_s0;

    func_002C2FA0(0, (u8 *)&sp2C, a2);
    var_s0 = D_00591E0C == 0;
    if (var_s0 == 0) {
        var_s0 = D_00591F13 != 0;
    }
    var_s0 = (var_s0 << 7) | (func_009A0270() & 0xFF & 0x7F);
    D_005E3600 = 0;
    *(u8 *)&sp2C = var_s0;
    func_002C2FA0(0, (u8 *)&sp2C, a2);
}
