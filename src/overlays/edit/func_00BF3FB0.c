/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

s16 func_00BF3FB0(s32 arg0) {
    return M2C_FIELD((((char *)D_00CE8E20) + (arg0 * 0x146C)), s16 *, 0x1454);
}
