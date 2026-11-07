/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u8 *func_00228A80(void);
u8 func_0022F8D0(void) {
    u8 *p;
    p = func_00228A80();
    if (p != 0) {
        return *(u8 *)(p + 0x33EB0);
    }
    return 0;
}
