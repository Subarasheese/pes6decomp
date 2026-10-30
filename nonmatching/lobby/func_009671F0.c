/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAC98;

void func_009671F0(void) {
    if (D_003EAC98 != NULL) {
        M2C_FIELD(D_003EAC98, s32 *, 0x1C) = 1;
    }
}
