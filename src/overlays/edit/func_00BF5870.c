/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

s32 func_00BF5870(s32 arg0) {
    return M2C_FIELD((((char *)D_00CE8E20) + (arg0 * 0x146C)), s32 *, 0x1448);
}
