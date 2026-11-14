/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CCAEBC[];

s16 func_00C17D30(s32 arg0) {
    return *(((u8 *)D_00CCAEBC) + ((arg0 & 0xFF) * 2));
}
