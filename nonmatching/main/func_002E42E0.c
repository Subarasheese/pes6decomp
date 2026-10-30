/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
void func_002E42E0(s32 arg0, s32 arg1, u8 arg2) {
    if ((arg0 != 0) && ((arg1 == 0) || (arg1 == 1))) {
        func_001F3D10(M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x24), arg2);
    }
}
