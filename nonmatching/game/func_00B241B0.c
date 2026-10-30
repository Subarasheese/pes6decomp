/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF1D[];

void func_00B241B0(s32 arg0) {
    (*(u8 *)D_00CBBF1D) = ((*(u8 *)D_00CBBF1D) & ~2) | ((arg0 != 0) * 2);
    (*(u8 *)D_00CBBF1D) = ((*(u8 *)D_00CBBF1D) & ~1) | 1;
}
