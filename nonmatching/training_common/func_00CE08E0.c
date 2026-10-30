/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7E1C;
extern s32 D_003EB2A4;

void func_00CE08E0(void) {
    D_003EB2A4 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
}
