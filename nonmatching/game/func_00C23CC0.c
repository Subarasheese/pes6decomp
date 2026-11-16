/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00984160(s32, s16, void *, s16, f32, f32);
extern char D_00CB531C[];
extern char D_00CB5320[];

s32 func_00C23CC0(s32 arg0, void *arg1) {
    s16 a = M2C_FIELD(arg1, s16 *, 0x28);
    s16 b = M2C_FIELD(arg1, s16 *, 0x2A);
    (*(f32 *)D_00CB531C) = (f32) a;
    (*(f32 *)D_00CB5320) = (f32) b;
    func_00984160(arg0, b, (void *)0xCB0000, a, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
    return 3;
}
