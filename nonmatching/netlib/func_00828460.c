/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A64CC[];

s32 func_00828460(void) {
    s32 *var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A64CC);
    }
    if (var_v0 != NULL) {
        return *var_v0;
    }
    return 0;
}
