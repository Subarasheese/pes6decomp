/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_002645D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00CD6030();                            /* extern */
M2C_UNK func_00CD60B0();                            /* extern */

void func_00CEE300(void *arg0) {
    func_00CD60B0();
    func_00CD6030();
    func_002645D0(arg0, 0xC, 1);
    func_00264790(arg0, 0x1CU);
}
