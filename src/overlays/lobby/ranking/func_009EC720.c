/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009EC720(M2C_UNK arg0, s32 *arg1) {
    s32 temp_v1;

    temp_v1 = *arg1;
    if (temp_v1 == 2) {
        *arg1 = 0;
    } else {
        *arg1 = temp_v1;
    }
    return 4;
}
