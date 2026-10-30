/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B00EC0[];
extern char D_00B02200[];

M2C_UNK *func_00AE4660(void) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (((*(u8 *)D_00B02200) & 1) == 1) {
        var_v0 = ((void *)D_00B00EC0);
    }
    return var_v0;
}
