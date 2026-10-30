/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0D[];

void func_00B24700(void) {
    s32 temp_v1;

    temp_v1 = 0 & 1;
    (*(u8 *)D_00CBBF0D) = ((*(u8 *)D_00CBBF0D) & ~2) | (temp_v1 * 2);
    (*(u8 *)D_00CBBF0D) = ((*(u8 *)D_00CBBF0D) & ~8) | (temp_v1 * 8);
}
