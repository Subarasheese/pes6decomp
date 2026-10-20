/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */

s32 func_002F5900(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0) = 5;
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0xA8), 0);
    return 1;
}
