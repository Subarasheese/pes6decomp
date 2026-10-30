/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
M2C_UNK func_008FB320(M2C_UNK);                     /* extern */

s32 func_008F7AB0(void) {
    func_001BC2B0();
    func_008FB320(-1);
    return 1;
}
