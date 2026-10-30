/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
s32 func_00BDEAF0(s8, s8);                          /* extern */
M2C_UNK func_00BDF070(void *, M2C_UNK);             /* extern */
s32 func_00BDF200(void *, M2C_UNK, M2C_UNK);        /* extern */

s32 func_00BDE9E0(void *arg0) {
    s32 var_v0;
    s8 temp_a0;

    func_00B912F0(0xA, 0);
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            func_00BDF070(arg0, 0xF);
            goto block_21;
        }
        func_0026E840(0x84008401);
        if ((M2C_FIELD(arg0, s8 *, 0x10) == 0) && (M2C_FIELD(arg0, s8 *, 0x11) == 1)) {
            var_v0 = 3;
            *M2C_FIELD(arg0, u16 **, 0) = M2C_FIELD(arg0, u16 *, 4);
        } else {
            M2C_FIELD(arg0, s8 *, 0x10) = 0;
            M2C_FIELD(arg0, s8 *, 0x11) = 1;
            var_v0 = 0;
        }
        return var_v0;
    }
    temp_a0 = M2C_FIELD(arg0, s8 *, 0x10);
    if (temp_a0 != 0) {
        if (func_00BDEAF0(temp_a0, M2C_FIELD(arg0, s8 *, 0x11)) == 0) {
            func_0026E840(0x8C008005);
block_21:
            return 0;
        }
        func_0026E840(0x84028400);
        return 1;
    }
    return func_00BDF200(arg0, 3, 0);
}
