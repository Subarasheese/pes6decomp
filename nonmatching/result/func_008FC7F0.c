/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C98[];

u16 func_008FC7F0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 >= (s32) M2C_FIELD(((void *)D_00921C98), u16 *, 0)) {
        return 0U;
    }
    return M2C_FIELD(((temp_a0 * 0xC) + M2C_FIELD(((void *)D_00921C98), s32 *, 4)), u16 *, 4);
}
