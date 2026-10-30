/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3B20(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008C9DB0(void *, M2C_UNK);             /* extern */
s32 func_008CB960(void *, u8, M2C_UNK);             /* extern */
M2C_UNK func_008E5110(void *, M2C_UNK);             /* extern */

s32 func_008C4530(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 1:
        if (func_008CB960(arg0 + 0xB0C, M2C_FIELD(arg0, u8 *, 0x19), 0) == 1) {
            return 0x27;
        }
    case 2:
block_12:
    default:
        return 0;
    case 0:
        func_008B3B20(0, 1);
        func_008C9DB0(arg0 + 0xB0C, 1);
        func_008E5110(arg0 + 0x129C, 2);
        goto block_12;
    }
}
