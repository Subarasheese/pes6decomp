/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6NowLoading[];

s32 Pes6NowLoading_IsActive(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((((void *)Pes6NowLoading) != NULL) && (M2C_FIELD(((void *)Pes6NowLoading), s32 *, 0x20) >= 2)) {
        var_v0 = 1;
    }
    return var_v0;
}
