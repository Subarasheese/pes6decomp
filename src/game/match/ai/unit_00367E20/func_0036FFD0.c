/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_003405E0(f32, f32);                        /* extern */

s32 func_0036FFD0(void *arg0) {
    return func_003405E0(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8)) != 0;
}
