/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008049C0();                            /* extern */
M2C_UNK func_00804C60();                            /* extern */

void func_00809670(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        func_008049C0();
    }
    func_00804C60();
}
