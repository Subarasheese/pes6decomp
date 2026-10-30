/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00115738(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0);
    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 4);
}
