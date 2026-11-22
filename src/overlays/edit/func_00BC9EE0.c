/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE4F40[];

s32 func_00BC9EE0(s32 arg0) {
    return M2C_FIELD((((char *)D_00CE4F40) + (arg0 * 0xC0)), s32 *, 0x28);
}
