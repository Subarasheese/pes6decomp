/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003AC4F0[];

u8 func_002C9C70(u8 a0) {
    if (a0 >= 24) a0 = 23;
    return D_003AC4F0[a0];
}
