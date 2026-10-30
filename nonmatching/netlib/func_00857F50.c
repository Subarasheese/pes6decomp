/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE2D0(s32);
extern s32 D_003E7814;
extern char D_008B21A2[];

s32 func_00857F50(void) {
    if (D_003E7814 != -1) {
        func_002DE2D0(D_003E7814);
    }
    D_003E7814 = -1;
    (*(s16 *)D_008B21A2) = 0;
    return 0;
}
