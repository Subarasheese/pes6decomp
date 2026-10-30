/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00178E50(int, int);
u32 func_00161200(void *arg0, s32 arg1) {
    return func_00178E50(M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (arg1 * 4)), void **, 8), s32 *, 4), 0) >> 1;
}
