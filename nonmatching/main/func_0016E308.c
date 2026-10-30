/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00385940[];

void *func_0016E308(u32 arg0) {
    void *var_v0;

    var_v0 = NULL;
    if (arg0 < 0x10U) {
        var_v0 = ((void *)D_00385940) + (arg0 * 0x44);
    }
    return var_v0;
}
