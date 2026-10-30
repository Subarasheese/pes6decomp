/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD1C;

void func_009B4020(s32 arg0) {
    M2C_FIELD(D_003EAD1C, s32 *, 0x1CC) = arg0;
}
