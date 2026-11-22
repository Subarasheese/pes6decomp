/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D0B2F0(void *arg0, s32 arg1, f32 fparg0) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x710) = arg1;
    M2C_FIELD(arg0, f32 *, 0x714) = fparg0;
    return 0;
}
