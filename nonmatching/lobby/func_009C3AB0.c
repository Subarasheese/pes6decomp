/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DD58;

s32 func_009C3AB0(s8 arg0) {
    if (D_00A7DD58 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DD58, s8 *, 0x55) = arg0;
    if (M2C_FIELD(D_00A7DD58, u8 *, 0x54) != 0) {
        func_001D7D60(M2C_FIELD(D_00A7DD58, void **, 0x38), arg0);
    }
    return 1;
}
