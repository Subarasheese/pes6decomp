/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_008E1CEC[];

s16 func_008BE710(s32 arg0) {
    return M2C_FIELD((((char *)D_008E1CEC) + (arg0 * 0x1A8)), s16 *, 0x0);
}
