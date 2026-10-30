/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005F0C0F[];
extern char D_005F0C10[];
extern char D_005F0C11[];
extern char D_005F0C12[];
extern char D_005F0C14[];

s32 func_003335A0(void) {
    if (((*(u8 *)D_005F0C0F) == 0) && ((*(u8 *)D_005F0C10) == 0) && ((*(u8 *)D_005F0C12) == 0) && ((*(u8 *)D_005F0C11) == 0)) {
        if ((*(u8 *)D_005F0C14) == 0) {
            return 0;
        }
        goto block_7;
    }
block_7:
    return 1;
}
