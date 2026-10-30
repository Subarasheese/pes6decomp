/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00AF8E60();                            /* extern */

void func_00AF93D0(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x250), 0, arg0 & 0xFF);
        func_00AF8E60();
    }
}
