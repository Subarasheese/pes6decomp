/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF24[];

u64 func_00B23DD0(void) {
    s32 temp_a4;
    u64 temp_a5;

    temp_a4 = 0 & 1;
    temp_a5 = (s64) (*(u8 *)D_00CBBF24) << 0x3E;
    (*(u8 *)D_00CBBF24) = ((*(u8 *)D_00CBBF24) & ~2) | (temp_a4 * 2);
    (*(u8 *)D_00CBBF24) = ((*(u8 *)D_00CBBF24) & ~1) | temp_a4;
    return temp_a5 >> 0x3F;
}
