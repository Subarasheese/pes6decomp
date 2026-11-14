/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBD3B2[];

u8 func_00BC8B90(s32 arg0) {
    return *(((u8 *)D_00CBD3B2) + ((arg0 & 0xFF) * 0x34));
}
