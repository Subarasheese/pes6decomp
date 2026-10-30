/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052AB90[];
extern char D_0052ABAC[];

s32 func_001D9FF0(s32 arg0) {
    s32 *var_a1;

    var_a1 = NULL;
    if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
        var_a1 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
    }
    if ((var_a1 == NULL) || (*var_a1 == 0)) {
        var_a1 = NULL;
    }
    if (var_a1 != NULL) {
        return M2C_FIELD(var_a1, s32 *, 0x44);
    }
    return 0;
}
