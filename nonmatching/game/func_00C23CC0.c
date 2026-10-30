/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00984160(s16, f32 *, s16, f32, f32);   /* extern */
extern char D_00CB531C[];
extern char D_00CB5320[];

s32 func_00C23CC0(M2C_UNK arg0, void *arg1) {
    f32 temp_f13;
    s16 temp_a1;
    s16 temp_a3;

    temp_a3 = M2C_FIELD(arg1, s16 *, 0x28);
    (*(f32 *)D_00CB531C) = (f32) temp_a3;
    temp_a1 = M2C_FIELD(arg1, s16 *, 0x2A);
    temp_f13 = (f32) temp_a1;
    (*(f32 *)D_00CB5320) = temp_f13;
    func_00984160(temp_a1, ((void *)D_00CB531C), temp_a3, (*(f32 *)D_00CB531C), temp_f13);
    return 3;
}
