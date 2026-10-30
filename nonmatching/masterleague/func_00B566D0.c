/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B80B80[];

u8 func_00B566D0(s32 arg0) {
    u32 temp_v1;
    void *var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 0x267U) {
        if ((s32) temp_v1 >= 0x268) {
            var_v0 = NULL;
        } else {
            var_v0 = ((void *)D_00B80B80) + (temp_v1 << 5);
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 0x1B);
    }
    return 0U;
}
