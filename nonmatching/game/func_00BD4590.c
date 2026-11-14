/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CB2418[];

u16 func_00BD4590(s32 arg0) {
    return *(((u8 *)D_00CB2418) + ((arg0 & 0xFF) * 2));
}
