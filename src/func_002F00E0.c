/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 func_001F3C60(s32);                             /* extern */

f32 func_002F00E0(void *arg0) {
    if (arg0 != NULL) {
        return func_001F3C60(M2C_FIELD(arg0, s32 *, 0x64));
    }
    return 0.0f;
}
