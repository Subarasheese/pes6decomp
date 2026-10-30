/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CAD70(s32, s64, M2C_UNK, M2C_UNK);  /* extern */
s64 func_008D1E40(s32);                             /* extern */

void func_008CB0E0(s32 arg0) {
    func_008CAD70(arg0, (s64) (func_008D1E40(arg0 + 0x480) << 0x30) >> 0x30, 0, 1);
}
