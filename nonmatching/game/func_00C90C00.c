/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD8A0[];
extern char D_00CCD8A4[];
extern char D_00CCD8AC[];
extern char D_00CCD8E0[];

void func_00C90C00(void) {
    s32 temp_a5;

    temp_a5 = 0 & 1;
    (*(u8 *)D_00CCD8AC) = ((*(u8 *)D_00CCD8AC) & ~1) | temp_a5;
    (*(s32 *)D_00CCD8A0) |= 1;
    (*(s32 *)D_00CCD8A4) = 0;
    (*(u8 *)D_00CCD8E0) = ((*(u8 *)D_00CCD8E0) & ~1) | temp_a5;
}
