/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00370290(void *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0) < 2560.0f) && !(M2C_FIELD(arg0, f32 *, 0xC) <= 7961.0f)) {
        return 1;
    }
    return 0;
}
