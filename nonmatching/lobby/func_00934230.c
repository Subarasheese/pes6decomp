/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
extern char D_00A03A00[];

void *func_00934230(void) {
    M2C_UNK *var_v0;
    s32 temp_s0;

    temp_s0 = func_0082C2A0();
    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_00A03A00);
    }
    if (var_v0 == NULL) {
        return NULL;
    }
    if (temp_s0 != 0) {
        return var_v0 + 0x28414;
    }
    return NULL;
}
