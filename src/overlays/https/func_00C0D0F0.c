/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BCDD00(s32);

s32 func_00C0D0F0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00BCDD00(M2C_FIELD(arg0, s32 *, 0x170));
    if (temp_v0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x168) = -0x7D2;
    }
    return temp_v0;
}
