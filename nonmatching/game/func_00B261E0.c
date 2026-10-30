/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE80[];

void func_00B261E0(s32 arg0) {
    (*(u8 *)D_00CBBE80) = ((*(u8 *)D_00CBBE80) & ~1) | 1;
    (*(u8 *)D_00CBBE80) = ((*(u8 *)D_00CBBE80) & ~2) | ((arg0 & 1) * 2);
}
