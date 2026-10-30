/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D1E40(s32);                             /* extern */
M2C_UNK func_008D22B0(s32, s32, s32);               /* extern */

void func_008C9AB0(s32 arg0, s32 arg1) {
    func_008D22B0(arg0 + 0x480, func_008D1E40(arg0 + 0x480), arg1);
}
