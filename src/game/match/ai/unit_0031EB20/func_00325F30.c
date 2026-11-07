/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00325F30(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if ((temp_v1 != 0x10) && (temp_v1 != 0xA)) {
        return 1;
    }
    return 0;
}
