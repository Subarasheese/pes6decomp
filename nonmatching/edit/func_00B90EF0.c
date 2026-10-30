/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F2E80(int);
extern char D_00CDF8F0[];

void func_00B90EF0(void) {
    if ((*(s32 *)D_00CDF8F0) != 0) {
        func_002F2E80((*(s32 *)D_00CDF8F0));
    }
}
