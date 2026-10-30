/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDF9E4[];
extern char D_00CDF9F8[];

void func_00B90E70(u8 arg0) {
    if ((arg0 & 0xFF) != (*(u8 *)D_00CDF9F8)) {
        (*(u8 *)D_00CDF9F8) = arg0;
        (*(s32 *)D_00CDF9E4) |= 0x10;
    }
}
