/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE80[];
extern char D_00CBBE84[];

void func_00B26170(s32 arg0) {
    (*(s32 *)D_00CBBE84) = arg0;
    (*(u8 *)D_00CBBE80) = ((*(u8 *)D_00CBBE80) & ~4) | 4;
    (*(u8 *)D_00CBBE80) = ((*(u8 *)D_00CBBE80) & ~1) | 1;
    (*(u8 *)D_00CBBE80) = ((*(u8 *)D_00CBBE80) & ~2) | 2;
}
