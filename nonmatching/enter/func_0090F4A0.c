/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00510FD0[];
extern char D_00591F2D[];
extern char D_0092F0D0[];
extern char D_0092F1A4[];

s32 func_0090F4A0(void) {
    if (((*(s32 *)D_00510FD0) != 9) && ((*(s32 *)D_00510FD0) != 0xC)) {
        return 0;
    }
    if ((*(u8 *)D_00591F2D) != 2) {
        return 0;
    }
    if (!((*(s32 *)D_0092F0D0) & 0x1000)) {
        if ((*(u16 *)D_0092F1A4) != 0x13) {
            return 0;
        }
        goto block_9;
    }
block_9:
    return 1;
}
