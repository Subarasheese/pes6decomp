/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864B0(s32);
extern void func_001864E0(s32);
extern void func_0018C180(s32, s32);
M2C_UNK func_0018C1B0(M2C_UNK);                     /* extern */
M2C_UNK func_0019C4E0(M2C_UNK, s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0019D690(s32 *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591BE4[];
extern char D_00908424[];

void func_008FF3E0(s64 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    s64 temp_a0;

    temp_a0 = (s64) (arg0 << 0x38) >> 0x38;
    switch (temp_a0) {                              /* irregular */
    case 5:
        func_001864E0(0x800);
        func_001864B0(0x6000);
    case 1:
        return;
    case 4:
        sp24 = 0xC0000000;
        sp28 = 0x437A0000;
        sp20 = 0;
        sp14 = 0xC1300000;
        sp18 = 0x41200000;
        sp10 = 0;
        func_0019D690(&sp20, &sp10, 0x3FC00000, 0x42200000, 0x3F800000, 0x3F733333);
        sp14 = 0xC1A00000;
        sp10 = 0;
        sp18 = 0;
        func_0019C4E0(0, &sp20, &sp10, 0x42480000, 0x41900000, 0x3F6E147B);
        sp24 = 0xC0000000;
        sp20 = 0x43480000;
        sp28 = 0x437A0000;
        func_0019C4E0(1, &sp20, &sp10, 0x42200000, 0x41200000, 0x3F6E147B);
        sp24 = 0xC0000000;
        sp20 = 0xC3480000;
        sp28 = 0x437A0000;
        func_0019C4E0(2, &sp20, &sp10, 0x42200000, 0x41200000, 0x3F6E147B);
        func_001864E0(0x6000);
        func_001864B0(0x800);
        func_0018C1B0(5);
        if ((s32) (*(u8 *)D_00591BE4) < 0) {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        } else {
            var_f0 = (f32) (*(u8 *)D_00591BE4);
        }
        func_0018C180(4, (s32) (0.04f * var_f0));
        if ((s32) (*(u8 *)D_00591BE4) < 0) {
            var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        } else {
            var_f0_2 = (f32) (*(u8 *)D_00591BE4);
        }
        func_0018C180(1, (s32) (0.5f * var_f0_2));
        (*(u8 *)D_00908424) |= 4;
        return;
    case 3:
        func_001864E0(0x800);
        func_001864B0(0x6000);
        func_0018C1B0(5);
        if ((s32) (*(u8 *)D_00591BE4) < 0) {
            var_f0_3 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        } else {
            var_f0_3 = (f32) (*(u8 *)D_00591BE4);
        }
        func_0018C180(4, (s32) (0.01f * var_f0_3));
        if ((s32) (*(u8 *)D_00591BE4) < 0) {
            var_f0_4 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        } else {
            var_f0_4 = (f32) (*(u8 *)D_00591BE4);
        }
        func_0018C180(1, (s32) (0.04f * var_f0_4));
        return;
    case 2:
        func_001864E0(0x800);
        func_001864B0(0x6000);
        func_0018C1B0(4);
        if ((s32) (*(u8 *)D_00591BE4) < 0) {
            var_f0_5 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
        } else {
            var_f0_5 = (f32) (*(u8 *)D_00591BE4);
        }
        func_0018C180(4, (s32) (0.01f * var_f0_5));
        return;
    }
}
