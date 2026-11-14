/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern char D_00CBFA8C[];

s32 func_00C12130(s32 arg0) {
    return *(((u8 *)D_00CBFA8C) + ((arg0 & 0xFF) * 4));
}
