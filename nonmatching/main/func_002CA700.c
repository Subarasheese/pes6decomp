/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0059228C[];

void func_002CA700(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_a0;
    s32 var_v1;

    if (arg2 == 0) {
        var_a0 = ((void *)D_0059228C) + ((arg0 & 0xFF) * 4);
        var_v1 = *var_a0 & ~(1 << arg1);
    } else {
        var_a0 = ((void *)D_0059228C) + ((arg0 & 0xFF) * 4);
        var_v1 = *var_a0 | (1 << arg1);
    }
    *var_a0 = var_v1;
}
