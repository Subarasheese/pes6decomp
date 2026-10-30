/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4380(s32);
extern char D_0052AE18[];

s32 func_001DCF70(s32 arg0) {
    s32 *temp_v0;
    s32 var_s0;
    void *temp_v1;

    var_s0 = arg0;
    temp_v0 = func_001F4380(arg0);
    if (temp_v0 != NULL) {
        var_s0 = *temp_v0;
    }
    temp_v1 = (*(s32 *)D_0052AE18) + (var_s0 * 0x10);
    if ((temp_v1 != NULL) && (M2C_FIELD(temp_v1, s32 *, 0) != 0)) {
        M2C_FIELD(temp_v1, s8 *, 0xC) = 1;
        return 1;
    }
    return 0;
}
