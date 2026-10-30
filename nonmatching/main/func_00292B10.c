/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

u8 func_00292B10(void) {
    u8 *var_v0;
    u8 var_v1;

    if (((void *)D_005A2330) != NULL) {
        var_v1 = (*(u8 *)D_005A2330);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 2) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_005A2336);
    }
    if (var_v0 == NULL) {
        return 0U;
    }
    return *var_v0;
}
