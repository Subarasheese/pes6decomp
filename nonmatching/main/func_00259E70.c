/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00259CB0(M2C_UNK *);                   /* extern */
M2C_UNK func_0025CD00(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0025E0E0(M2C_UNK);                         /* extern */
M2C_UNK func_0025E100(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058CF80[];

void func_00259E70(void) {
    if (func_0025E0E0(5) == 1) {
        func_00259CB0(((void *)D_0058CF80));
        func_0025CD00(3, 1);
        func_0025E100(5, 2);
    }
}
