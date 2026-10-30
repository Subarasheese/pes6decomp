/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A7428[];

s32 func_00827CF0(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    s32 var_v1;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A7428);
    }
    if (var_v0 != NULL) {
        var_v1 = M2C_FIELD(var_v0, s32 *, 4);
    } else {
        var_v1 = 0;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A7428);
    }
    if (var_v0_2 != NULL) {
        return var_v1 >= 0x14;
    }
    return 1;
}
