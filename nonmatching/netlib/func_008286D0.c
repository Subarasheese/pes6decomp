/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A9848[];

void *func_008286D0(void) {
    M2C_UNK *var_v0;
    void *var_v1;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A9848);
    }
    if (var_v0 != NULL) {
        var_v1 = var_v0 + 4;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0x46) != 0) {
            return var_v1 + 0x46;
        }
        goto block_14;
    }
block_14:
    return NULL;
}
