/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE88[];

void func_00B26280(s32 arg0) {
    (*(u8 *)D_00CBBE88) = ((*(u8 *)D_00CBBE88) & ~1) | 1;
    (*(u8 *)D_00CBBE88) = ((*(u8 *)D_00CBBE88) & ~0xE) | ((arg0 & 7) * 2);
}
