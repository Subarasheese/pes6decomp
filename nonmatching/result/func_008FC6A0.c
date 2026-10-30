/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C98[];

u8 func_008FC6A0(s32 arg0) {
    s32 temp_a0_2;
    u8 temp_a0;
    void *temp_v1;

    temp_a0_2 = arg0 & 0xFFFF;
    if (temp_a0_2 < (s32) M2C_FIELD(((void *)D_00921C98), u16 *, 0)) {
        temp_v1 = (temp_a0_2 * 0xC) + M2C_FIELD(((void *)D_00921C98), s32 *, 4);
        temp_a0 = M2C_FIELD(temp_v1, u8 *, 1);
        if (temp_a0 != 0xFF) {
            return M2C_FIELD(((temp_a0 << 5) + M2C_FIELD(temp_v1, s32 *, 8)), u8 *, 1);
        }
    }
    return 0xFFU;
}
