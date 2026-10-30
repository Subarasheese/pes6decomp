/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

void func_00CD7F00(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a2;
    s32 var_a3;
    s32 var_a4;

    var_a4 = 0;
    var_a2 = ((void *)Pes6MatchSquads);
    do {
        var_a3 = 0;
        var_a1 = var_a2;
loop_2:
        var_a3 += 8;
        M2C_FIELD(var_a1, s32 *, 0xD8) = (s32) M2C_FIELD(var_a1, s32 *, 0xC0);
        M2C_FIELD(var_a1, s32 *, 0x420) = (s32) M2C_FIELD(var_a1, s32 *, 0x408);
        M2C_FIELD(var_a1, s32 *, 0x768) = (s32) M2C_FIELD(var_a1, s32 *, 0x750);
        M2C_FIELD(var_a1, s32 *, 0xAB0) = (s32) M2C_FIELD(var_a1, s32 *, 0xA98);
        M2C_FIELD(var_a1, s32 *, 0xDF8) = (s32) M2C_FIELD(var_a1, s32 *, 0xDE0);
        M2C_FIELD(var_a1, s32 *, 0x1140) = (s32) M2C_FIELD(var_a1, s32 *, 0x1128);
        M2C_FIELD(var_a1, s32 *, 0x1488) = (s32) M2C_FIELD(var_a1, s32 *, 0x1470);
        M2C_FIELD(var_a1, s32 *, 0x17D0) = (s32) M2C_FIELD(var_a1, s32 *, 0x17B8);
        var_a1 += 0x1A40;
        if (var_a3 < 0x20) {
            goto loop_2;
        }
        var_a4 += 1;
        var_a2 += 0x6900;
    } while (var_a4 < 2);
}
