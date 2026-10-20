/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s8 func_0030E6C0(s32);                              /* extern */

s32 func_003139C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xF) = func_0030E6C0(arg1);
    return 1;
}
