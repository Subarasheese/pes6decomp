/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE7C[];

void func_00B267F0(void) {
    s32 temp_a1;

    temp_a1 = 0 & 1;
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~1) | 1;
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~2) | 2;
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~4) | (temp_a1 * 4);
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~8) | (temp_a1 * 8);
}
