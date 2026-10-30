/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCC980();                                /* extern */
extern char D_00922E8B[];
extern char D_00922E8C[];

s32 func_00912F60(void) {
    s32 var_v0;

    var_v0 = func_00BCC980() != 1;
    if (var_v0 != 0) {
        var_v0 = ((*(u8 *)D_00922E8B) + (*(u8 *)D_00922E8C)) != 0;
    }
    return var_v0;
}
