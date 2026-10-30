/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C98[];

s32 func_008FC4B0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    void *temp_v1;

    temp_a2 = arg0 & 0xFFFF;
    if (temp_a2 < (s32) M2C_FIELD(((void *)D_00921C98), u16 *, 0)) {
        temp_a0 = arg1 & 0xFF;
        temp_v1 = (temp_a2 * 0xC) + M2C_FIELD(((void *)D_00921C98), s32 *, 4);
        if (temp_a0 < (s32) M2C_FIELD(temp_v1, u8 *, 7)) {
            return M2C_FIELD(((temp_a0 << 5) + M2C_FIELD(temp_v1, s32 *, 8)), s32 *, 4);
        }
    }
    return 0;
}
