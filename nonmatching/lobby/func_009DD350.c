/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_00A7DEB8;

s32 func_009DD350(u8 arg0) {
    if (D_00A7DEB8 == NULL) {
        return 0;
    }
    if ((arg0 & 0xFF) != M2C_FIELD(D_00A7DEB8, u8 *, 0x651)) {
        M2C_FIELD(D_00A7DEB8, u8 *, 0x651) = arg0;
        if (M2C_FIELD(D_00A7DEB8, u8 *, 0x650) != 0) {
            func_001D7D60(M2C_FIELD(D_00A7DEB8, void **, 0x5D8), (s8) arg0);
        }
    }
    return 1;
}
