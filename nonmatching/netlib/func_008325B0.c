/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

void *func_008325B0(void) {
    M2C_UNK *var_v1;

    if (func_0082C2A0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008AA13C);
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, u8 *, 0x298) != 0) {
            return var_v1 + 0x298;
        }
        goto block_10;
    }
block_10:
    return NULL;
}
