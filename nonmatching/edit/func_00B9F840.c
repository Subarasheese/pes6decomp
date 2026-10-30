/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B6A30(s32);
extern char D_00CE40E8[];

void func_00B9F840(s32 arg0) {
    if (((*(s32 *)D_00CE40E8) < 0x4E20) || ((*(s32 *)D_00CE40E8) >= 0x7530)) {
        (*(s32 *)D_00CE40E8) = 1;
    }
    func_001B6A30(arg0);
}
