/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0017F900();                                /* extern */
M2C_UNK func_001FC840(M2C_UNK);                     /* extern */
extern char D_005E5E10[];

s32 func_002D6A30(void) {
    s32 var_s0;

    var_s0 = 0;
    switch ((*(s32 *)D_005E5E10)) {                           /* irregular */
    case 0:
        func_001FC840(8);
        (*(s32 *)D_005E5E10) += 1;
        break;
    case 1:
        if (func_0017F900() == 1) {
            (*(s32 *)D_005E5E10) += 1;
        default:
            var_s0 = 1;
        }
        break;
    }
    return var_s0;
}
