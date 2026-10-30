/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C706F0(u16 *, u16, u16 *, u16, s32, u16); /* extern */
extern char D_00591DEE[];
extern char D_00CCD074[];

void func_00C86C10(s32 arg0) {
    s32 temp_a5;
    u16 temp_a2;
    u16 temp_a4;
    u16 temp_a6;

    temp_a5 = ((arg0 != 0) * 8) & 0xFFFF;
    temp_a6 = (*(u16 *)D_00591DEE) | 8;
    (*(u16 *)D_00591DEE) = temp_a6;
    temp_a4 = (*(u16 *)D_00591DEE) ^ 8;
    (*(u16 *)D_00591DEE) = temp_a4;
    temp_a2 = (*(u16 *)D_00591DEE) | temp_a5;
    (*(u16 *)D_00591DEE) = temp_a2;
    if ((*(u8 *)D_00CCD074) & 1) {
        func_00C706F0(((void *)D_00591DEE), temp_a2, ((void *)D_00591DEE), temp_a4, temp_a5, temp_a6);
    }
}
