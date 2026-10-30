/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B14CD[];

s32 func_0084A620(s32 arg0) {
    (*(u8 *)D_008B14CD) = ((*(u8 *)D_008B14CD) & ~0x40) | ((arg0 & 1) << 6);
    return arg0;
}
