/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005225B0[];
extern char D_00522840[];

void func_001B42F0(void) {
    M2C_UNK *var_a4;
    M2C_UNK *var_a5;
    M2C_UNK *var_a6;
    M2C_UNK *var_a7;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;

    var_t2 = 0;
    var_a7 = ((void *)D_00522840);
    var_a6 = ((void *)D_005225B0);
    do {
        M2C_FIELD(var_a7, s8 *, 0) = 1;
        var_t1 = 0;
        M2C_FIELD(var_a7, s8 *, 1) = 0;
        var_a5 = var_a6;
        M2C_FIELD(var_a7, s8 *, 2) = 0;
        M2C_FIELD(var_a7, s8 *, 3) = 0;
        M2C_FIELD(var_a7, s8 *, 4) = 0;
        M2C_FIELD(var_a7, s8 *, 5) = 0;
        M2C_FIELD(var_a7, s8 *, 6) = 0;
        M2C_FIELD(var_a7, s8 *, 7) = 0;
loop_2:
        var_t0 = 0;
        var_a4 = var_a5;
loop_3:
        var_t0 += 3;
        M2C_FIELD(var_a4, u8 *, 1) = (u8) ((M2C_FIELD(var_a4, u8 *, 1) & ~0x80) | 0x80);
        M2C_FIELD(var_a4, u8 *, 3) = (u8) ((M2C_FIELD(var_a4, u8 *, 3) & ~0x80) | 0x80);
        M2C_FIELD(var_a4, u8 *, 5) = (u8) ((M2C_FIELD(var_a4, u8 *, 5) & ~0x80) | 0x80);
        var_a4 += 6;
        if (var_t0 < 9) {
            goto loop_3;
        }
        var_t1 += 1;
        var_a5 += 0x12;
        if (var_t1 < 4) {
            goto loop_2;
        }
        var_t2 += 1;
        var_a7 += 8;
        var_a6 += 0x48;
    } while (var_t2 < 9);
}
