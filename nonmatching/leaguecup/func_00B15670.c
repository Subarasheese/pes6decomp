/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B14F90();                                /* extern */
extern s32 D_003EAD74;

s32 func_00B15670(void) {
    if (D_003EAD74 == 0) {
        return 1;
    }
    return func_00B14F90();
}
