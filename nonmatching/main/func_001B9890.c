/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_003D15C0[];

s32 func_001B9890(s32 arg0) {
    if (arg0 < 0) {
        return -1;
    }
    if ((u32) arg0 >= 0xEU) {
        return -1;
    }
    return *(u8 *)(((u8 *)D_003D15C0) + (arg0 * 4));
}
