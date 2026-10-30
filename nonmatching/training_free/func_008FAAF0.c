/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA6C0;

void func_008FAAF0(void) {
    M2C_FIELD(D_003EA6C0, s32 *, 0x178) = (s32) (M2C_FIELD(D_003EA6C0, s32 *, 0x178) + 1);
}
