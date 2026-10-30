/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921310[];

s32 func_008F6640(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_v1 = 1 - (((s32) (arg0 & 0xFF) % 2) * 2);
    if (temp_v1 <= 0) {
        var_a1 = 7 - var_a1;
    }
    if (temp_v1 <= 0) {
        var_a2 = 5 - var_a2;
    }
    temp_a3 = ((arg0 & 0xFF) * 0xDC) + ((void *)D_00921310);
    return M2C_FIELD(((var_a2 * 4) + ((var_a1 * 0x18) + temp_a3)), s32 *, 0x120) + M2C_FIELD((((5 - var_a2) * 4) + (((7 - var_a1) * 0x18) + temp_a3)), s32 *, 0x5B0);
}
