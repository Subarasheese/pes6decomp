/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB5190[];
extern char D_00CCD958[];

u8 func_00C94510(void) {
    return *(((char *)D_00CB5190) + (*(s32 *)D_00CCD958));
}
