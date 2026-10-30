/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00844D40(M2C_UNK, M2C_UNK, s16 *, M2C_UNK, s32, s32, s32, s32); /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_008502E0(s32, u8);                         /* extern */
extern char D_00591E4D[];
extern char D_008B144E[];
extern char D_008B14EC[];
extern char D_008B14F0[];

s32 func_00856A20(void) {
    s16 sp20;
    s32 sp24;
    u8 sp28;
    s32 sp2C;
    u16 sp30;
    s32 sp38;
    s32 sp3C;
    s16 temp_s0;
    s32 temp_a7;

    temp_s0 = *func_008472D0();
    if (temp_s0 == (func_008502E0((*(s8 *)D_008B144E) & 1, (*(u8 *)D_00591E4D)) & 0xFF)) {
        func_001C48E8(&sp20, 0, 0x14);
        sp20 = 0x13;
        func_00110E58(func_001105C8(), &sp3C, &sp38);
        temp_a7 = sp38 / 1000;
        sp28 = (*(u8 *)D_00591E4D);
        sp2C = (*(s32 *)D_008B14EC);
        sp30 = (*(u16 *)D_008B14F0);
        sp24 = temp_a7 + (sp3C * 0x3E8);
        func_00844D40(9, 0, &sp20, 0x14, sp3C * 0x7D, sp3C * 0x1F, sp3C, temp_a7);
    }
    return 0;
}
