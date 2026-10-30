/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCDD0[];

void func_00C87470(s32 arg0) {
    u8 var_a0;

    if ((arg0 == 0) && (((*(u8 *)D_00CCCDD0) & 1) != arg0)) {
        if (arg0 == 0) {
            (*(u8 *)D_00CCCDD0) = ((*(u8 *)D_00CCCDD0) & ~1) | (0 & 1);
            var_a0 = ((*(u8 *)D_00CCCDD0) & ~2) | 2;
        } else {
            (*(u8 *)D_00CCCDD0) = ((*(u8 *)D_00CCCDD0) & ~1) | 1;
            var_a0 = ((*(u8 *)D_00CCCDD0) & ~2) | 2;
        }
        (*(u8 *)D_00CCCDD0) = var_a0;
    }
}
