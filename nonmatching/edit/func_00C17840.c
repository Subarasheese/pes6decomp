/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC4F70(M2C_UNK, M2C_UNK);            /* extern */

void func_00C17840(s32 arg0) {
    if ((arg0 & 0xFFFF) == 0x126) {
        func_00BC4F70(0xF1004F, 0);
        return;
    }
    func_00BC4F70(0xF1004E, 0);
}
