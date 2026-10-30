/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_008A4398;
extern char D_008A9BEC[];

u8 *func_00824850(void) {
    M2C_UNK *var_v0_2;
    u8 *var_v0;

    if (D_008A4398 != NULL) {
        if (M2C_FIELD(D_008A4398, s32 *, 0x49E8) == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = ((void *)D_008A9BEC);
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = var_v0_2 + 4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        if (*var_v0 == 0) {
            var_v0 = NULL;
        }
        return var_v0;
    }
    return NULL;
}
