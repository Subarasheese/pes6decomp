/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001EDAE0(void *, s8);
void func_006296D0(void *arg0, s32 arg1) {
    func_001EDAE0(M2C_FIELD(arg0, void **, 0x160), arg1 & 0xFF);
    func_001D7D60(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC), arg1 & 0xFF);
}
