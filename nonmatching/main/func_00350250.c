/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00332FA0();                                /* extern */
M2C_UNK func_00338930(s32);                         /* extern */
s32 func_00C7B820();                                /* extern */
extern s8 D_003E9F84;

s32 func_00350250(s32 arg0) {
    if (func_00C7B820() != 0) {
        return 0;
    }
    if (func_00332FA0() == 0) {
        D_003E9F84 = 0;
        func_00338930(arg0);
        return 1;
    }
    return 0;
}
