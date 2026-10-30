/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00173B00(void *);                      /* extern */
M2C_UNK func_00174380(void *);                      /* extern */

s32 func_001710D8(void *arg0) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF0);
        if (M2C_FIELD(arg0, s32 *, 0xD0C) != temp_v1) {
            M2C_FIELD(arg0, s32 *, 0xB94) = 0;
            M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v1;
            func_00174380(arg0);
            func_00173B00(arg0);
            var_v0 = 1;
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        return 0;
    }
    return var_v0;
}
