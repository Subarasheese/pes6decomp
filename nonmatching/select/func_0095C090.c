/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
s32 func_00959EC0();                                /* extern */
M2C_UNK func_0095A040();                            /* extern */
s32 func_0095A1C0();                                /* extern */
s32 func_0095BF00();                                /* extern */
extern s32 D_003EAC44;
extern s32 D_003EAC48;

s32 func_0095C090(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EAC44) {                           /* irregular */
    case 0:
        if (func_0095BF00() == 1) {
            func_0095A040();
            D_003EAC44 += 1;
        }
        break;
    case 1:
        if ((func_001B68B0() == 1) == 1) {
            D_003EAC44 += 1;
        }
        func_0095A040();
        break;
    case 2:
        D_003EAC48 = func_0095A1C0();
        func_0095A040();
        if ((D_003EAC48 != 1) && (D_003EAC48 != 2)) {

        } else {
            D_003EAC44 += 1;
        }
        break;
    case 3:
        if (func_00959EC0() == 1) {
            var_s0 = D_003EAC48;
            D_003EAC44 = 0;
        }
        break;
    }
    return var_s0;
}
