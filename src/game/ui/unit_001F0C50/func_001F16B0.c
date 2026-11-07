/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 func_001E4E30(s32);                             /* extern */

f32 func_001F16B0(void *arg0) {
    if (arg0 != NULL) {
        return func_001E4E30(M2C_FIELD(arg0, s32 *, 0x54));
    }
    return 0.0f;
}
