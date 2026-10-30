/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0014A960(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_001CDAA0();                                /* extern */
M2C_UNK func_00251B50(M2C_UNK);                     /* extern */
extern M2C_UNK func_00253750;

void func_0026ED70(void) {
    if (func_001CDAA0() == 0) {
        func_00251B50(0x3C);
    } else if (func_001CDAA0() != 1) {
        func_00251B50(0x3C);
    } else {
        func_00251B50(0x32);
    }
    func_0014A960(&func_00253750, 0);
}
