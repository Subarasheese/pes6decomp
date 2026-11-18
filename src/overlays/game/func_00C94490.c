/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB5170[];
extern char D_00CCD950[];

u8 func_00C94490(void) {
    return *(((char *)D_00CB5170) + (*(s32 *)D_00CCD950));
}
