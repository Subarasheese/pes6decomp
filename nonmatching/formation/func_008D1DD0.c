/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B9AB0(s32, s32);                    /* extern */

void func_008D1DD0(void *arg0, s8 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 & 0xFF;
    func_008B9AB0(M2C_FIELD(arg0, s32 *, 0x1D8), temp_s0);
    M2C_FIELD(arg0, s8 *, 0xB) = arg1;
    if (temp_s0 == 0) {
        func_002DB580(M2C_FIELD(arg0, s32 *, 0x1D4), 0);
    }
}
