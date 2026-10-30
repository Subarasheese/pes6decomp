/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0061ED50[];

s32 func_003631C0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        if ((*(u8 *)D_0061ED50) & 2) {
            return -1;
        }
block_7:
    default:
        return 0;
    case 1:
        if ((*(u8 *)D_0061ED50) & 1) {
            return -1;
        }
        goto block_7;
    }
}
