/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592995[];

u8 func_002885D0(s32 arg0, s32 arg1) {
    return *(((arg1 & 0xFF) * 0x348) + (((char *)D_00592995) + ((arg0 & 0xFF) * 0x6900)));
}
