/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C30[];

u8 func_008F7650(s32 arg0, s32 arg1) {
    void *temp_v1;

    if (M2C_FIELD(((void *)D_00921C30), s32 *, 4) != 0) {
        temp_v1 = M2C_FIELD(((void *)D_00921C30), s32 *, 0) + ((arg0 & 0xFF) * 8);
        if (arg1 < M2C_FIELD(temp_v1, s32 *, 0)) {
            return M2C_FIELD(((arg1 * 4) + M2C_FIELD(temp_v1, s32 *, 4)), u8 *, 2);
        }
    }
    return 0U;
}
