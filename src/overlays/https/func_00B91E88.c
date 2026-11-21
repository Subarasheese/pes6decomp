/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00B97010(s32);

s32 func_00B91E88(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0) = func_00B97010(2);
    M2C_FIELD(arg0, s16 *, 2) = func_00B97010(5);
    return 4;
}
