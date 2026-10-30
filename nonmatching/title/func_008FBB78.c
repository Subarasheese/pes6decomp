/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB150(s32, s32);                    /* extern */

s32 func_008FBB78(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg2 + 0x13;
    func_008FB150(M2C_FIELD(arg0, s32 *, 0x40), ((s32) ((temp_v1 > -1) ? temp_v1 : (arg2 + 0x22)) >> 4) * 0x10);
    return 1;
}
