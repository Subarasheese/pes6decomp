/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAF0C;
extern u8 D_003EAF10;

void func_00B77300(void) {
    if (D_003EAF0C != NULL) {
        M2C_FIELD(D_003EAF0C, u8 *, 0x40) = (u8) D_003EAF10;
        M2C_FIELD(D_003EAF0C, s32 *, 0x44) = 0;
    }
}
