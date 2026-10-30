/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A9848[];

void *func_00828B10(void) {
    M2C_UNK *var_v0;
    s8 temp_v1;
    void *var_a0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A9848);
    }
    if (var_v0 != NULL) {
        var_a0 = var_v0 + 4;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        temp_v1 = M2C_FIELD(var_a0, s8 *, 0x191);
        switch (temp_v1) {                          /* irregular */
        default:
            return NULL;
        case 3:
        case 2:
        case 1:
            if (M2C_FIELD(var_a0, u8 *, 0x160) != 0) {
                return var_a0 + 0x160;
            }
            return NULL;
        case 4:
            return NULL;
        }
    } else {
        return NULL;
    }
}
