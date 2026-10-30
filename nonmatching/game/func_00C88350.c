/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCE04[];

void func_00C88350(s32 arg0) {
    if ((arg0 == 0) && (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3D) >> 0x3F) != 0)) {
        (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~1) | (0 & 1);
    }
}
