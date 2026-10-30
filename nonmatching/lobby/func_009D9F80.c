/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB940(void *);
extern void *D_00A7DEB0;

s32 func_009D9F80(void) {
    if (D_00A7DEB0 != NULL) {
        return func_002DB940(M2C_FIELD(D_00A7DEB0, void **, 0xC));
    }
    return 0;
}
