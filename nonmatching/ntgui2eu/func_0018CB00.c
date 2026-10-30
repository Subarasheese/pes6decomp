/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8D68[];

void func_0018CB00(s32 *arg0, s32 *arg1, s32 *arg2) {
    *arg0 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x30);
    *arg1 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x34);
    *arg2 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x38);
}
