/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00229B70(void);
extern void *D_003E77B0;

s32 func_00B011C0(void) {
    if ((s32) M2C_FIELD(D_003E77B0, u8 *, 7) >= 2) {
        return 1;
    }
    return (func_00229B70() & 0xFF) >= 8;
}
