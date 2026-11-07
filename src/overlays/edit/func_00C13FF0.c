/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *func_002F7F80(void);

s32 func_00C13FF0(s32 arg0) {
    u8 *temp_v0;

    if ((arg0 < 0) || (arg0 >= 0x59)) {
        return 0;
    }
    temp_v0 = func_002F7F80();
    if (temp_v0 == NULL) {
        return 0;
    }
    return *temp_v0 != 0;
}
