/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C98[];

u8 func_008FC830(s32 arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = arg0 & 0xFFFF;
    if (temp_a2 >= (s32) M2C_FIELD(((void *)D_00921C98), u16 *, 0)) {
        return 0U;
    }
    return M2C_FIELD(((arg1 & 0xFF) + ((temp_a2 * 0xC) + M2C_FIELD(((void *)D_00921C98), s32 *, 4))), u8 *, 2);
}
