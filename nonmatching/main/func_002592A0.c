/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0025E0E0(s32);
extern char D_0058CF6C[];
extern char D_0058CF6D[];

void func_002592A0(s32 arg0) {
    if ((*(u8 *)D_0058CF6C) != 2) {
        return;
    }
    if (func_0025E0E0(7) == 3) {
        (*(u8 *)D_0058CF6D) ^= arg0;
    }
}
