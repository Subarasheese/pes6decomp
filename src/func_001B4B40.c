/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001E59D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001E5A10();                            /* extern */
M2C_UNK func_001E5E50(s32, M2C_UNK);                /* extern */

void func_001B4B40(s32 arg0) {
    if (arg0 != 0) {
        func_001E5A10();
        func_001E5E50(arg0, 0x61);
        func_001E59D0(arg0, 1);
    }
}
