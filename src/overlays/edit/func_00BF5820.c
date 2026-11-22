/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

s32 func_00BF5820(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 4) + (((char *)D_00CE8E20) + (arg0 * 0x146C))), s32 *, 0x1430);
}
