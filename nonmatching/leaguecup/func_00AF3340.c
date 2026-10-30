/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF3B30(void);
M2C_UNK func_00972040(s32, s32, s32, s32);          /* extern */

void func_00AF3340(s32 arg0) {
    s32 temp_a3;
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        temp_a3 = arg0 & 0xFF;
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x80), temp_a3 % 10, ((arg0 & 0xFF) / 10) + ((u32) temp_a3 >> 0x1F), temp_a3);
    }
}
