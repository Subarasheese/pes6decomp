/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00C91680(s32, s32, u16, char *, u16, char *, u16, char *);
extern char D_00591DEE[];
extern char D_00CCD074[];

void func_00C86ED0(s32 arg0) {
    u16 temp_a2;
    u16 temp_a4;
    u16 temp_a6;

    (*(u16 *)D_00591DEE) |= 2;
    (*(u16 *)D_00591DEE) ^= 2;
    temp_a6 = (*(u16 *)D_00591DEE) | 0x40;
    (*(u16 *)D_00591DEE) = temp_a6;
    temp_a4 = (*(u16 *)D_00591DEE) ^ 0x40;
    (*(u16 *)D_00591DEE) = temp_a4;
    temp_a2 = (*(u16 *)D_00591DEE) | (((arg0 != 0) << 6) & 0xFFFF);
    (*(u16 *)D_00591DEE) = temp_a2;
    if ((*(u8 *)D_00CCD074) & 1) {
        func_00C91680(0, arg0, temp_a2, (char *)0x590000, temp_a4, (char *)0x590000, temp_a6, (char *)0x590000);
    }
}
