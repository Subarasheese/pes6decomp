/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8D68[];

void func_0018C928(s32 *arg0, s32 *arg1) {
    *arg0 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18);
    *arg1 = M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C);
}
