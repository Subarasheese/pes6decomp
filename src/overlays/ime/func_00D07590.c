/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s8 func_00D07590(void *arg0) {
    if (arg0 == NULL) {
        return 0xA;
    }
    return M2C_FIELD(arg0, s8 *, 0x3E);
}
