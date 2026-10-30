/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];

void func_002914F0(s32 arg0, s8 arg1) {
    s8 *var_v1;
    s8 var_a1;
    u8 var_a2;

    var_a1 = arg1;
    if (((void *)D_005A2330) != NULL) {
        var_a2 = (*(u8 *)D_005A2330);
    } else {
        var_a2 = 0;
    }
    if (var_a2 != 1) {
        var_v1 = NULL;
    } else if ((arg0 >= 0) && (arg0 < 2)) {
        var_v1 = ((void *)D_005A2330) + (arg0 * 0x9C) + 6;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (var_a1 >= 8) {
            var_a1 = 7;
        }
        *var_v1 = var_a1;
    }
}
