/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003417D0(void *arg0) {
    u8 value;

    if (arg0 == NULL) {
        return 0;
    } else {
        value = M2C_FIELD(arg0, u8 *, 5);
        if ((value != 3) && (value != 0xD)) {
            return 0;
        }
        return 1;
    }
}
