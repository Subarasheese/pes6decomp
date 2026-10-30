/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA6AC;
extern void *D_00908DA0;

u16 func_00900350(void) {
    if (D_003EA6AC == 0) {
        return 0U;
    }
    return M2C_FIELD(D_00908DA0, u16 *, 0x14);
}
