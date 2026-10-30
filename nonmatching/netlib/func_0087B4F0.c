/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA37C;
extern char D_008B23E8[];

void func_0087B4F0(s32 arg0) {
    if ((D_003EA37C != 0) && (arg0 == 0)) {
        (*(s32 *)D_008B23E8) = arg0;
    }
}
