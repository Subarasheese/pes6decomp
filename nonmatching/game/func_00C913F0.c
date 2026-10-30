/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C820A0(u8);                          /* extern */
extern char D_00CCD8A0[];
extern char D_00CCD8AC[];

void func_00C913F0(s32 arg0) {
    u8 temp_a1;

    temp_a1 = (*(u8 *)D_00CCD8AC);
    if (((u64) ((s64) temp_a1 << 0x3C) >> 0x3F) != arg0) {
        (*(u8 *)D_00CCD8AC) = (temp_a1 & ~8) | ((arg0 & 1) * 8);
        (*(s32 *)D_00CCD8A0) |= 8;
        func_00C820A0(temp_a1);
    }
}
