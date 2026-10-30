/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DF10;

s32 func_009E4E90(s32 arg0) {
    s8 temp_a1;

    if (D_00A7DF10 != NULL) {
        temp_a1 = arg0 != 0;
        M2C_FIELD(D_00A7DF10, s8 *, 0x28) = temp_a1;
        func_001D7D60(M2C_FIELD(D_00A7DF10, void **, 8), temp_a1);
        return 1;
    }
    return 0;
}
