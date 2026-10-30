/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
void func_008C5CF0(void *arg0, s8 arg1) {
    func_001D7D60(M2C_FIELD(arg0, void **, 0x10), arg1);
    func_001D7D60(M2C_FIELD(arg0, void **, 0x14), arg1);
    func_001D7D60(M2C_FIELD(arg0, void **, 0x18), arg1);
}
