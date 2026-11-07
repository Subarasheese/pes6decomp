/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052AB90[];
extern char D_0052ABAC[];

s32 *func_001DA3F0(s32 arg0) {
    s32 *var_v0;

    var_v0 = NULL;
    if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
        var_v0 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
    }
    if ((var_v0 != NULL) && (*var_v0 != 0)) {
        return var_v0;
    }
    return NULL;
}
