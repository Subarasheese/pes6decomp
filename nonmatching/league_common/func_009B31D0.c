/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7F90(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */

void func_009B31D0(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x3FC), 0, arg0 & 0xFF);
    }
}
