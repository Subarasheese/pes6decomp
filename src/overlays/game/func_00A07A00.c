/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592A55[];

u8 func_00A07A00(void *arg0) {
    return *((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((u8 *)D_00592A55) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900)));
}
