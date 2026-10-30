/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA810;
extern char D_00CCBBD0[];

void func_00C6DE10(s32 arg0) {
    if (D_003EA810 != 0) {
        (*(u8 *)D_00CCBBD0) = ((*(u8 *)D_00CCBBD0) & ~8) | ((arg0 & 1) * 8);
        (*(u8 *)D_00CCBBD0) = ((*(u8 *)D_00CCBBD0) & ~4) | 4;
    }
}
