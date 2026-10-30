/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEE0[];

void func_00B24EB0(void) {
    s32 temp_v1;

    temp_v1 = 0 & 1;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~4) | (temp_v1 * 4);
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~8) | (temp_v1 * 8);
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x10) | 0x10;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~1) | 1;
}
