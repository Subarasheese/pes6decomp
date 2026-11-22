/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00984160(void *, float, float);

extern char D_00CB531C[];
extern char D_00CB5320[];

s32 func_00C23CC0(s32 arg0, void *arg1) {
    f32 temp_f13;

    (*(f32 *)D_00CB531C) = (f32) M2C_FIELD(arg1, s16 *, 0x28);
    temp_f13 = (f32) M2C_FIELD(arg1, s16 *, 0x2A);
    (*(f32 *)D_00CB5320) = temp_f13;
    func_00984160((void *) arg0, (*(f32 *)D_00CB531C), temp_f13);
    return 3;
}
