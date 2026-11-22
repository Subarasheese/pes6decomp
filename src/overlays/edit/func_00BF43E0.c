/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

u8 func_00BF43E0(s32 arg0) {
    return M2C_FIELD((((char *)D_00CE8E20) + (arg0 * 0x146C)), u8 *, 0x1450);
}
