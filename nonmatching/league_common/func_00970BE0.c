/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00958000(M2C_UNK);                     /* extern */
extern void *D_003EA94C;

s32 func_00970BE0(void) {
    if (D_003EA94C != NULL) {
        M2C_FIELD(D_003EA94C, s8 *, 0x405) = 2;
        func_00958000(0x80);
    }
    return 0;
}
