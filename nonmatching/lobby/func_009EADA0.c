/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, s32, s32);               /* extern */
extern void *D_00A7DF98;

s32 func_009EADA0(s32 arg0, s32 arg1, s32 arg2) {
    sprintf(arg0, arg1, M2C_FIELD(D_00A7DF98, s32 (**)(s32), 8)(arg2));
    return arg0;
}
