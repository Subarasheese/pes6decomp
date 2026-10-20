/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 func_002A8930();                                /* extern */

void func_002AD120(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 8) = func_002A8930();
    M2C_FIELD(arg0, s8 *, 3) = 0x2B;
}
