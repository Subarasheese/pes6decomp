/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003AC690[];

s32 func_002C9C40(u8 a0) {
    if (a0 >= 10) a0 = 1;
    return D_003AC690[a0];
}
