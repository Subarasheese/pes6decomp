/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018C6D8(s32);                             /* extern */
extern char D_005C8D64[];
extern char D_005C8D68[];

s32 func_0018C948(void) {
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x2C) = 1;
    if (M2C_FIELD(((void *)D_005C8D68), s32 *, 0) == 1) {
        if (func_0018C6D8(M2C_FIELD(((void *)D_005C8D68), s32 *, 0)) != 0) {
            return M2C_FIELD(((void *)D_005C8D64), s32 *, 0) == 0;
        }
        return M2C_FIELD(((void *)D_005C8D64), s32 *, -0x729C);
    }
    return 0;
}
