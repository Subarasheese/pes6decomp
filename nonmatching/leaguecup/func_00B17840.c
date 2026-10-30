/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B19810();                                /* extern */
extern s32 D_003EAD78;

s32 func_00B17840(void) {
    if (D_003EAD78 == 0) {
        return 1;
    }
    return func_00B19810();
}
