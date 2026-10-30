/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1594[];

void func_008504E0(s32 arg0) {
    if (arg0 != 0) {
        (*(s32 *)D_008B1594) |= arg0;
    } else {
        (*(s32 *)D_008B1594) = 0;
    }
}
