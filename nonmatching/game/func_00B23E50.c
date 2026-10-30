/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF24[];
extern char D_00CBBF28[];

void func_00B23E50(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *)D_00CBBF28) = arg2;
    (*(u8 *)D_00CBBF24) = ((*(u8 *)D_00CBBF24) & ~1) | 1;
    (*(u8 *)D_00CBBF24) = ((*(u8 *)D_00CBBF24) & ~8) | ((arg1 != 0) * 8);
    (*(u8 *)D_00CBBF24) = ((*(u8 *)D_00CBBF24) & ~4) | ((arg0 == 1) * 4);
}
