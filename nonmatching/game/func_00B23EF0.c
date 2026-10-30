/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF20[];

s32 func_00B23EF0(void) {
    u64 temp_a0;

    temp_a0 = (u64) ((s64) (*(u8 *)D_00CBBF20) << 0x38) >> 0x3C;
    (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF0) | ((0 & 0xF) * 0x10);
    return 0 | temp_a0;
}
