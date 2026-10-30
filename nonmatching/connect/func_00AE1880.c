/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00AE18F0();                                /* extern */
extern char D_00B00780[];

s32 func_00AE1880(s32 *arg0) {
    s32 var_s0;
    s32 var_v0;

    var_v0 = 0;
    var_s0 = *arg0;
    switch (var_s0) {                               /* irregular */
    case 0:
        func_001C48E8(((void *)D_00B00780), 0, 0x34);
        var_s0 += 1;
        /* fallthrough */
    case 1:
        var_v0 = func_00AE18F0();
        break;
    }
    *arg0 = var_s0;
    return var_v0;
}
