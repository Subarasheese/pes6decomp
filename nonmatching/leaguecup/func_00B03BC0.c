/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B03D30();                                /* extern */
extern void *D_003EAD58;

s32 func_00B03BC0(void) {
    if (D_003EAD58 != NULL) {
        if (M2C_FIELD(D_003EAD58, s32 *, 0x24) == 1) {
            return 1;
        }
        return func_00B03D30();
    }
    return 1;
}
