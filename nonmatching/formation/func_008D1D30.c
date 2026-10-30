/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B9A90(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */

void func_008D1D30(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1DC) == 0) && (M2C_FIELD(arg0, u8 *, 0xB) == 0)) {
        func_008B9AB0(M2C_FIELD(arg0, s32 *, 0x1D8), 1);
        M2C_FIELD(arg0, u8 *, 0xB) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0xB) == 1) {
            if (M2C_FIELD(arg0, u8 *, 0xC) == 0) {
                func_008B9A90(M2C_FIELD(arg0, s32 *, 0x1D8), 1);
            } else {
                func_008B9A90(M2C_FIELD(arg0, s32 *, 0x1D8), 0);
            }
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 4) < (s32) M2C_FIELD(arg0, u8 *, 3)) {
            func_002DB580(M2C_FIELD(arg0, s32 *, 0x1D4), 1);
        }
    }
}
