/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C91680(M2C_UNK, s32, u16, u16 *, u16, u16 *, u16, u16 *); /* extern */
extern char D_00591DEE[];
extern char D_00CCD074[];

void func_00C86E10(s32 arg0) {
    u16 temp_a2;
    u16 temp_a4;
    u16 temp_a6;

    (*(u16 *)D_00591DEE) |= 2;
    (*(u16 *)D_00591DEE) ^= 2;
    (*(u16 *)D_00591DEE) |= 2;
    temp_a6 = (*(u16 *)D_00591DEE) | 0x80;
    (*(u16 *)D_00591DEE) = temp_a6;
    temp_a4 = (*(u16 *)D_00591DEE) ^ 0x80;
    (*(u16 *)D_00591DEE) = temp_a4;
    temp_a2 = (*(u16 *)D_00591DEE) | (((arg0 != 0) << 7) & 0xFFFF);
    (*(u16 *)D_00591DEE) = temp_a2;
    if ((*(u8 *)D_00CCD074) & 1) {
        func_00C91680(1, arg0, temp_a2, ((void *)D_00591DEE), temp_a4, ((void *)D_00591DEE), temp_a6, ((void *)D_00591DEE));
    }
}
