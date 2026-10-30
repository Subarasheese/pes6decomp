/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8D64[];
extern char D_005C8D68[];

s32 func_0018C9A0(void) {
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x2C) = 0;
    if (M2C_FIELD(((void *)D_005C8D68), s32 *, 0) == 1) {
        return (*(s32 *)D_005C8D64);
    }
    return 0;
}
