/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00B02688;

void func_00AE9040(s32 arg0) {
    M2C_FIELD(D_00B02688, s32 *, 0xC) = arg0;
}
