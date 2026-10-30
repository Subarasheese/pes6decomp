/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */

s32 func_0095CD10(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        if (arg1 != 0) {
            func_001C48E8(0, 0x894);
            func_001C4730(arg0, arg1, 0x810);
            func_001C8590(arg0 + 0x810, arg0 + 0x12, 0x40);
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
