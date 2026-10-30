/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCDFC[];
extern char D_00CCCE04[];

void func_00C88320(s32 arg0) {
    if (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3D) >> 0x3F) != 0) {
        (*(s32 *)D_00CCCDFC) = arg0;
    }
}
