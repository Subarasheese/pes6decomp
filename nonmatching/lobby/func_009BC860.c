/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */

s32 func_009BC860(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    func_001C48E8(arg0 + 0x3C, 0, 0x42);
    if (arg1 != 0) {
        func_001C8590(arg0 + 0x3C, arg1, 0x42);
    }
    return 0;
}
