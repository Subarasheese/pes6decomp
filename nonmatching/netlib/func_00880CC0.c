/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void *D_008B2484;
extern void *D_008B2488;
extern char D_008B24D1[];

s32 func_00880CC0(s8 arg0) {
    (*(s8 *)D_008B24D1) = arg0;
    if (arg0 == 0) {
        func_001D7D60(D_008B2484, 0);
        func_001D7D60(D_008B2488, 0);
    }
    return 0;
}
