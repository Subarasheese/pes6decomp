/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE7C[];

void func_00B266F0(void) {
    s32 temp_a2;

    temp_a2 = 0 & 1;
    (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~2) | (temp_a2 * 2);
    if (((u64) ((s64) (*(u8 *)D_00CBBE7C) << 0x3E) >> 0x3F) == 1) {
        (*(u8 *)D_00CBBE7C) = ((*(u8 *)D_00CBBE7C) & ~4) | (temp_a2 * 4);
    }
}
