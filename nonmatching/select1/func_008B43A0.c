/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern int func_002211F0(int, int, int, int);
extern char D_008CEE60[];
extern char D_008DC2A0[];
extern char D_008DC2B0[];
extern char D_008DC2C0[];
extern char D_008DC2D0[];
extern char D_008DC2D2[];
extern char D_008DC2E0[];
extern char D_008DC2F0[];
extern char D_008DC300[];

void func_008B43A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s128 sp10;
    s16 sp20;
    s16 sp22;
    s16 sp30;
    s16 sp32;
    s16 sp40;
    s16 sp42;
    s16 sp50;
    s16 sp52;
    s16 sp60;
    s16 sp62;
    s16 sp70;
    s16 sp72;
    M2C_UNK *var_a2_2;
    M2C_UNK *var_a2_3;
    M2C_UNK *var_a2_5;
    M2C_UNK *var_a2_6;
    M2C_UNK *var_a2_7;
    M2C_UNK *var_a3;
    s128 *var_a2;
    s16 *var_a2_4;
    s16 *var_a3_2;
    s16 *var_a3_3;
    s16 *var_a3_4;
    s16 *var_a3_5;
    s16 *var_a3_6;
    s16 *var_a3_7;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a5;
    u8 temp_a5_2;

    temp_v0 = func_002211F0(arg0, arg1, arg2, arg3);
    var_a2 = &sp10;
    var_a3 = ((void *)D_008CEE60);
    var_a1 = 0x1C;
    do {
        var_a1 -= 1;
        M2C_FIELD(var_a2, s16 *, 0) = (s16) M2C_FIELD(var_a3, s16 *, 0);
        M2C_FIELD(var_a2, s16 *, 2) = (s16) M2C_FIELD(var_a3, s16 *, 2);
        var_a3 += 4;
        var_a2 += 4;
    } while (var_a1 > 0);
    temp_a5 = M2C_FIELD(temp_v0, u8 *, 0);
    temp_a4 = M2C_FIELD(temp_v0, u8 *, 1);
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 6);
    var_a3_2 = &sp20;
    sp20 = (s16) temp_a5;
    var_a2_2 = ((void *)D_008DC2B0);
    sp22 = (s16) temp_a5;
    var_a1_2 = 4;
    temp_a5_2 = M2C_FIELD(temp_v0, u8 *, 2);
    sp30 = (s16) temp_a4;
    sp32 = (s16) temp_a4;
    temp_a4_2 = M2C_FIELD(temp_v0, u8 *, 3);
    sp40 = (s16) temp_a0;
    sp42 = (s16) temp_a0;
    temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 4);
    sp50 = (s16) temp_a5_2;
    sp52 = (s16) temp_a5_2;
    sp60 = (s16) temp_a4_2;
    sp62 = (s16) temp_a4_2;
    sp70 = (s16) temp_a0_2;
    sp72 = (s16) temp_a0_2;
    (*(s128 *)D_008DC2A0) = sp10;
    do {
        var_a1_2 -= 1;
        M2C_FIELD(var_a2_2, s16 *, 0) = (s16) M2C_FIELD(var_a3_2, s16 *, 0);
        M2C_FIELD(var_a2_2, s16 *, 2) = (s16) M2C_FIELD(var_a3_2, s16 *, 2);
        var_a3_2 += 4;
        var_a2_2 += 4;
    } while (var_a1_2 > 0);
    var_a3_3 = &sp30;
    var_a2_3 = ((void *)D_008DC2C0);
    var_a1_3 = 4;
    do {
        var_a1_3 -= 1;
        M2C_FIELD(var_a2_3, s16 *, 0) = (s16) M2C_FIELD(var_a3_3, s16 *, 0);
        M2C_FIELD(var_a2_3, s16 *, 2) = (s16) M2C_FIELD(var_a3_3, s16 *, 2);
        var_a3_3 += 4;
        var_a2_3 += 4;
    } while (var_a1_3 > 0);
    var_a3_4 = &sp40;
    var_a2_4 = ((void *)D_008DC2D0);
    var_a1_4 = 4;
    do {
        var_a1_4 -= 1;
        M2C_FIELD(var_a2_4, s16 *, 0) = M2C_FIELD(var_a3_4, s16 *, 0);
        M2C_FIELD(var_a2_4, s16 *, 2) = (s16) M2C_FIELD(var_a3_4, s16 *, 2);
        var_a3_4 += 4;
        var_a2_4 += 4;
    } while (var_a1_4 > 0);
    var_a3_5 = &sp50;
    var_a2_5 = ((void *)D_008DC2E0);
    var_a1_5 = 4;
    do {
        var_a1_5 -= 1;
        M2C_FIELD(var_a2_5, s16 *, 0) = (s16) M2C_FIELD(var_a3_5, s16 *, 0);
        M2C_FIELD(var_a2_5, s16 *, 2) = (s16) M2C_FIELD(var_a3_5, s16 *, 2);
        var_a3_5 += 4;
        var_a2_5 += 4;
    } while (var_a1_5 > 0);
    var_a3_6 = &sp60;
    var_a2_6 = ((void *)D_008DC2F0);
    var_a1_6 = 4;
    do {
        var_a1_6 -= 1;
        M2C_FIELD(var_a2_6, s16 *, 0) = (s16) M2C_FIELD(var_a3_6, s16 *, 0);
        M2C_FIELD(var_a2_6, s16 *, 2) = (s16) M2C_FIELD(var_a3_6, s16 *, 2);
        var_a3_6 += 4;
        var_a2_6 += 4;
    } while (var_a1_6 > 0);
    var_a3_7 = &sp70;
    var_a2_7 = ((void *)D_008DC300);
    var_a1_7 = 4;
    do {
        var_a1_7 -= 1;
        M2C_FIELD(var_a2_7, s16 *, 0) = (s16) M2C_FIELD(var_a3_7, s16 *, 0);
        M2C_FIELD(var_a2_7, s16 *, 2) = (s16) M2C_FIELD(var_a3_7, s16 *, 2);
        var_a3_7 += 4;
        var_a2_7 += 4;
    } while (var_a1_7 > 0);
    temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 6);
    switch (temp_a0_3) {                            /* irregular */
    case 2:
        (*(s16 *)D_008DC2D0) = 1;
        (*(s16 *)D_008DC2D2) = 1;
        return;
    case 1:
        (*(s16 *)D_008DC2D0) = 2;
        (*(s16 *)D_008DC2D2) = 2;
        return;
    case 0:
        (*(s16 *)D_008DC2D0) = 0;
        (*(s16 *)D_008DC2D2) = 0;
        return;
    }
}
