/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023A380();                                /* extern */
M2C_UNK func_00333320(M2C_UNK);                     /* extern */
s32 func_00338790(M2C_UNK);                         /* extern */
M2C_UNK func_003387D0(s32, M2C_UNK *, M2C_UNK *);   /* extern */
M2C_UNK func_003388B0(M2C_UNK);                     /* extern */
M2C_UNK func_00338930(s32);                         /* extern */
s32 func_00BC8D30();                                /* extern */
extern char D_003E70F0[];
extern M2C_UNK func_0036C270;

s32 func_0036C410(s32 arg0) {
    if (func_0023A380() != 0) {
        func_00333320(1);
        func_003388B0(3);
        func_00338930(arg0);
        goto block_8;
    }
    if (func_00BC8D30() != 0) {
        if (func_00338790(3) != 0) {
            func_003387D0(arg0, &func_0036C270, ((void *)D_003E70F0));
        }
block_8:
        return 1;
    }
    return 0;
}
