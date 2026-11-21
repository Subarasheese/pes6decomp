/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00CE35B0[];

u8 func_00B94DC0(s32 arg0) {
    if (arg0 < 0x24) {
        return M2C_FIELD((arg0 + D_00CE35B0[0]), u8 *, 0x19D0);
    }
    return 0U;
}
