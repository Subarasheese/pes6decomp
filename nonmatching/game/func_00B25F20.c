/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];
extern char D_00CBBED4[];

void func_00B25F20(s32 arg0) {
    (*(s32 *)D_00CBBED4) = arg0;
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~0x10) | 0x10;
}
