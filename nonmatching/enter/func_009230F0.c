/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_002955A0();                                /* extern */
extern char D_0092EC50[];
extern char D_0092F678[];

M2C_UNK *func_009230F0(void) {
    s32 var_a2;

    var_a2 = func_002955A0() & 0xFF;
    if (var_a2 >= 0) {
        if (var_a2 >= 0x64) {
            var_a2 = 0x63;
        }
    } else {
        var_a2 = 0;
    }
    sprintf(((void *)D_0092F678), ((void *)D_0092EC50), var_a2);
    return ((void *)D_0092F678);
}
