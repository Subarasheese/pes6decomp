/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF10[];

u64 func_00B242F0(void) {
    u64 temp_v0;

    temp_v0 = (u64) ((s64) (*(u8 *)D_00CBBF10) << 0x39) >> 0x3F;
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0x40) | ((0 & 1) << 6);
    return temp_v0;
}
