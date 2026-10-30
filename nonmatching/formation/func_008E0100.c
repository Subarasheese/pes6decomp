/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008DFB60();                            /* extern */
M2C_UNK func_008DFC10(void *, u8);                  /* extern */

void func_008E0100(void *arg0) {
    func_008DFB60();
    func_008DFC10(arg0, M2C_FIELD(arg0, u8 *, 0x51));
}
