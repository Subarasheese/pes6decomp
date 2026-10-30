/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0038655C[];

void func_0016F408(u32 arg0) {
    (*(u32 *)D_0038655C) = arg0;
    if (arg0 >= 2U) {
        (*(u32 *)D_0038655C) = 0;
    }
}
