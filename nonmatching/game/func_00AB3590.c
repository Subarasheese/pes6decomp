/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AB33D0(s32);                             /* extern */
s32 func_00B044D0(s32, s32);                        /* extern */

s32 func_00AB3590(M2C_UNK arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_v0;

    temp_a1 = func_00AB33D0(arg1) & 0xFFFF;
    temp_v1 = arg1 & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0x225:
        var_v0 = func_00B044D0(arg1, 0xB4);
block_33:
        return var_v0 & 0xFFFF;
    case 0xF8:
        var_v0 = func_00B044D0(arg1, 0x87);
        goto block_33;
    case 0x106:
        var_v0 = func_00B044D0(arg1, 0x5A);
        goto block_33;
    case 0xD4:
    case 0x255:
    case 0xD0:
        return 0;
    default:
        var_v0 = func_00B044D0(arg1, temp_a1);
        goto block_33;
    case 0xB2:
    case 0xAC:
    case 0x246:
    case 0xCA:
        var_v0 = func_00B044D0(arg1, 0x2D);
        goto block_33;
    }
}
