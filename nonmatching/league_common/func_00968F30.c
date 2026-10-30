/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002E84D0();                                /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
s32 func_0096C750();                                /* extern */
M2C_UNK func_0096CB60();                            /* extern */
extern void *D_003E77AC;

s32 func_00968F30(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = M2C_FIELD(D_003E77AC, s32 *, 4);
    var_s0 = -1;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_002E84D0() == 0) {
            func_0094C790(3);
        } else {
            func_0094C790(1);
        }
        break;
    case 1:
        func_0096CB60();
        func_0094C790(2);
        break;
    case 2:
        temp_v0 = func_0096C750();
        if ((temp_v0 != 3) && (temp_v0 != 2) && (temp_v0 != 1)) {

        } else {
            func_0094C790(3);
        }
        break;
    case 3:
        var_s0 = 0x3C;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
