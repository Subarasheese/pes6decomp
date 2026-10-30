/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C916B0(M2C_UNK, u8, s32, s32, M2C_UNK, s32, s32); /* extern */
extern char D_00591DEE[];
extern char D_00CCD8A0[];
extern char D_00CCD8A4[];
extern char D_00CCD8AC[];
extern char D_00CCD8E0[];

void func_00C90C60(s32 arg0) {
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_a7;
    s32 var_a2;
    u8 temp_a2;

    var_a2 = 0xFF;
    if (!((*(u16 *)D_00591DEE) & 1) == 1) {
        var_a2 = 0x40;
    }
    (*(s32 *)D_00CCD8A4) = var_a2;
    temp_a6 = arg0 & 1;
    temp_a7 = (*(s32 *)D_00CCD8A0) | 2;
    temp_a4 = (*(u8 *)D_00CCD8AC) & ~1;
    temp_a3 = temp_a7 | 1;
    (*(s32 *)D_00CCD8A0) = temp_a3;
    (*(u8 *)D_00CCD8AC) = temp_a4 | temp_a6;
    temp_a2 = ((*(u8 *)D_00CCD8E0) & ~1) | temp_a6;
    (*(u8 *)D_00CCD8E0) = temp_a2;
    if (arg0 == 1) {
        func_00C916B0(1, temp_a2, temp_a3, temp_a4, -2, temp_a6, temp_a7);
    }
}
