/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_004FDC04[];
extern char D_004FDC10[];

s32 func_00140490(void) {
    return M2C_FIELD(((((*(u8 *)D_004FDC10) == 0) * 4) + (*(s32 *)D_004FDC04)), s32 *, 0x18);
}
