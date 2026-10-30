/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A64CC[];

void *func_00828290(s32 arg0) {
    M2C_UNK *var_v1_2;
    void *var_v1;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v1_2 = NULL;
    } else {
        var_v1_2 = ((void *)D_008A64CC);
    }
    if (var_v1_2 == NULL) {
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else if (arg0 < 0x32) {
        var_v1 = var_v1_2 + (arg0 * 0x38) + 0xC;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, u8 *, 5) != 0) {
            return var_v1 + 5;
        }
        return NULL;
    }
    return NULL;
}
