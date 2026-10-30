/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005247A8[];

void func_001B9DD0(s8 arg0) {
    if ((arg0 & 0xFF) < 9) {
        (*(s8 *)D_005247A8) = arg0;
    }
}
