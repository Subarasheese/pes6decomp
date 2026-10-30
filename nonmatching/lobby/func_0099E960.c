/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BCC70(s32);                             /* extern */

s32 func_0099E960(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            var_v1 = M2C_FIELD(arg0, s32 *, 0x34);
        } else {
            goto block_9;
        }
    } else {
block_9:
        var_v1 = -1;
    }
    if (var_v1 < 0) {
        return 0;
    }
    temp_v0 = var_v1 < 3;
    if (temp_v0 == 0) {
        return 0;
    }
    if (arg0 == NULL) {
        return 0;
    }
    if (var_v1 >= 0) {
        if (temp_v0 != 0) {
            return func_009BCC70(M2C_FIELD(((var_v1 * 4) + arg0), s32 *, 0x28));
        }
        goto block_22;
    }
block_22:
    return 0;
}
