/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0C[];

void func_00B24970(s32 arg0) {
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~1) | 1;
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~8) | 8;
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~0x10) | ((arg0 != 0) * 0x10);
}
