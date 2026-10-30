/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00836D80();                            /* extern */
s32 func_00836DC0();                                /* extern */
s32 func_0084A750();                                /* extern */
extern char D_00923FF4[];

s32 func_0091D420(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (func_0084A750() != 0) {
        func_00836D80();
        (*(s32 *)D_00923FF4) = -1;
        return -1;
    }
    temp_v0 = func_00836DC0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        var_s0 = 1;
        break;
    case 4:
        var_s0 = 1;
        break;
    default:
    case 2:
    case 1:
        var_s0 = -1;
        break;
    }
    (*(s32 *)D_00923FF4) = var_s0;
    return var_s0;
}
