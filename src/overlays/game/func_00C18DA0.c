/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB36C8[];

u8 func_00C18DA0(s32 arg0) {
    return *(((u8 *)D_00CB36C8) + (arg0 & 0xFF));
}
