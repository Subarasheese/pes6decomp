/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DCA60(s32 *);                           /* extern */
extern char D_008AB740[];

s32 func_00838CB0(s32 arg0) {
    s32 *var_a0;
    s32 *var_v0;

    if ((*(s32 *)D_008AB740) != arg0) {
        var_v0 = NULL;
    } else if (arg0 == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008AB740);
    }
    if (var_v0 != NULL) {
        var_a0 = var_v0 + 4;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 == NULL) {
        return -1;
    }
    return func_002DCA60(var_a0);
}
