/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];

u8 func_00292780(s32 arg0) {
    u8 var_v0;
    u8 var_v1;
    void *var_v0_2;

    if (((void *)D_005A2330) != NULL) {
        var_v1 = (*(u8 *)D_005A2330);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 1) {
        var_v0_2 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_v0_2 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = M2C_FIELD(var_v0_2, u8 *, 1);
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
