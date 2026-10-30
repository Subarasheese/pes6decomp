/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK *func_0081D630(s32, s32);                   /* extern */
extern char D_00A03498[];

s32 func_009ECA40(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v0;

    if (arg2 >= 0) {
        var_v0 = func_0081D630((arg2 >> 8) & 0xFF, arg2 & 0xFF);
    } else {
        var_v0 = ((void *)D_00A03498);
    }
    sprintf(arg0, arg1, var_v0);
    return arg0;
}
