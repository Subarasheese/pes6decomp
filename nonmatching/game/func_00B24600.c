/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0E[];

void func_00B24600(s32 arg0, s32 arg1) {
    (*(u8 *)D_00CBBF0E) = ((*(u8 *)D_00CBBF0E) & ~1) | 1;
    (*(u8 *)D_00CBBF0E) = ((*(u8 *)D_00CBBF0E) & ~4) | ((arg1 != 0) * 4);
    (*(u8 *)D_00CBBF0E) = ((*(u8 *)D_00CBBF0E) & ~2) | ((arg0 == 1) * 2);
}
