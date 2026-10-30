/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE7C[];

void func_00B266A0(s32 arg0) {
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~8) | ((arg0 & 1) * 8);
}
