/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
s32 func_008B29B0(s32);                             /* extern */

void func_008EB2D0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, void **, 0x7C) != NULL) {
        func_001DF820(M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0xC), func_008B29B0(arg1 & 0xFF));
    }
}
