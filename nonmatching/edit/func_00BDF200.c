/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, s8);                 /* extern */

s32 func_00BDF200(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s8 temp_a3;

    temp_a3 = M2C_FIELD(arg0, s8 *, 0x11);
    var_s0 = 0;
    switch (temp_a3) {                              /* irregular */
    case 2:
        var_s0 = arg2;
        *M2C_FIELD(arg0, u16 **, 0) = 0xCDCD;
        M2C_FIELD(arg0, s8 *, 0x10) = 0;
block_14:
        M2C_FIELD(arg0, s8 *, 0x11) = 0;
        break;
    case 1:
        var_s0 = 2;
        *M2C_FIELD(arg0, u16 **, 0) = M2C_FIELD(arg0, u16 *, 4);
        break;
    case 0:
        var_s0 = arg1;
        break;
    case 3:
        var_s0 = arg2;
        *M2C_FIELD(arg0, u16 **, 0) = M2C_FIELD(arg0, u16 *, 6);
        M2C_FIELD(arg0, s8 *, 0x10) = 0;
        goto block_14;
    }
    func_0026E840(0x84028400, temp_a3);
    return var_s0;
}
