/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0F[];

void func_00B24520(s32 arg0, s32 arg1) {
    (*(u8 *)D_00CBBF0F) = ((*(u8 *)D_00CBBF0F) & ~1) | 1;
    (*(u8 *)D_00CBBF0F) = ((*(u8 *)D_00CBBF0F) & ~4) | ((arg1 != 0) * 4);
    (*(u8 *)D_00CBBF0F) = ((*(u8 *)D_00CBBF0F) & ~2) | ((arg0 == 1) * 2);
}
