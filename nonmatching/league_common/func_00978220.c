/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

void func_00978220(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    void *temp_a0;

    var_a3 = 0;
    var_a2 = ((void *)Pes6MatchSquads);
    do {
        var_a4 = 0;
        var_a1 = var_a2;
loop_2:
        var_a5 = 0;
loop_3:
        temp_a0 = var_a1 + var_a5;
        M2C_FIELD(temp_a0, s8 *, 0x48) = 0;
        var_a5 += 8;
        M2C_FIELD(temp_a0, s8 *, 0x49) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4A) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4B) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4C) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4D) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4E) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x4F) = 0;
        if (var_a5 < 0x20) {
            goto loop_3;
        }
        var_a4 += 1;
        var_a1 += 0x348;
        if (var_a4 < 0x20) {
            goto loop_2;
        }
        var_a3 += 1;
        var_a2 += 0x6900;
    } while (var_a3 < 2);
}
