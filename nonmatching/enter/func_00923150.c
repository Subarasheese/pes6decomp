/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_00295540(void);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32);   /* extern */
extern char D_0092EC58[];
extern char D_0092F670[];

M2C_UNK *func_00923150(void) {
    f32 var_f0;
    f32 var_f1;

    var_f0 = func_00295540();
    var_f1 = 0.0f;
    if (!(var_f0 < 0.0f)) {
        var_f1 = 99.0f;
        if (!(var_f0 <= 99.0f)) {
            goto block_5;
        }
    } else {
block_5:
        var_f0 = var_f1;
    }
    sprintf(((void *)D_0092F670), ((void *)D_0092EC58), (s32) var_f0);
    return ((void *)D_0092F670);
}
