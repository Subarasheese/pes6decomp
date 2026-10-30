/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164F08(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_00173FC8(s32, s32, M2C_UNK);           /* extern */

s32 func_00165268(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00164F08(2, arg0 + 0x400, arg1 - 0x400);
    if (temp_v0 != 0) {
        func_00173FC8(temp_v0, arg0, 0x400);
    }
    return temp_v0;
}
