/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DF10;

s32 func_009E5170(s8 arg0) {
    if (D_00A7DF10 == NULL) {
        return 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DF10, void **, 0), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DF10, void **, 4), arg0);
    if (arg0 & 0xFF) {
        func_001D7D60(M2C_FIELD(D_00A7DF10, void **, 8), (s8) M2C_FIELD(D_00A7DF10, u8 *, 0x28));
    } else {
        func_001D7D60(M2C_FIELD(D_00A7DF10, void **, 8), arg0);
    }
    return 1;
}
