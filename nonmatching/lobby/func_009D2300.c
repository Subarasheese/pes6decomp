/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DE00;

s32 func_009D2300(s8 arg0) {
    if (D_00A7DE00 == NULL) {
        return 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DE00, void **, 0xA4), arg0);
    func_001D7D60(M2C_FIELD(D_00A7DE00, void **, 0xA8), arg0);
    return 1;
}
