/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002307F0();                                /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0098F7E0();                            /* extern */
M2C_UNK func_0098FD90();                            /* extern */

s32 func_009671D0(void) {
    s32 temp_v1;

    temp_v1 = func_002307F0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        break;
    case 0:
        func_0098F7E0();
        func_0098FD90();
        break;
    }
    func_0094C790(0);
    return 0x18;
}
