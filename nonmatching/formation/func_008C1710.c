/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008C3920(s32);                         /* extern */

void func_008C1710(s32 arg0) {
    if (arg0 != 0) {
        func_008C3920(arg0 + 8);
        func_001C48E8(arg0, 0, 0x90);
    }
}
