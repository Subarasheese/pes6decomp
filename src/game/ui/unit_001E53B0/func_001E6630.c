/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Texture_GetCacheKey(s32);                             /* extern */

s32 func_001E6630(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return Pes6Texture_GetCacheKey(M2C_FIELD(arg0, s32 *, 8));
}
