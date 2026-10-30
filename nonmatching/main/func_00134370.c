/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134370(void *arg0, void **arg1) {
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x50004);
    if (temp_a2 != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x50008);
        *arg1 = arg0 + ((s32) (temp_v1 + (M2C_FIELD(arg0, s32 *, 0x50000) - temp_a2)) % temp_v1);
    }
    return M2C_FIELD(arg0, s32 *, 0x50004);
}
