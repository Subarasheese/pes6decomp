/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];

void func_00B25F80(s32 arg0) {
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~0x20) | ((arg0 == 1) << 5);
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~0x10) | 0x10;
}
