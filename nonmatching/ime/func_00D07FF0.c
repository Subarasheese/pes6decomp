/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00D07F40();                            /* extern */

s32 func_00D07FF0(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    func_00D07F40();
    func_001C48E8(arg0, 0, 0x74);
    return 1;
}
