/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB5160[];
extern char D_00CCD950[];

u8 func_00C944B0(void) {
    return *(((char *)D_00CB5160) + (*(s32 *)D_00CCD950));
}
