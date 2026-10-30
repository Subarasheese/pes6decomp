/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_008B4490(void) {
    M2C_UNK *var_a4;
    s32 temp_a2;
    s32 var_a5;
    u8 temp_a1;
    void *temp_a1_2;
    void *temp_a2_2;

    var_a5 = 0;
    var_a4 = ((void *)D_00591A90);
    do {
        var_a5 += 1;
        temp_a1 = M2C_FIELD(var_a4, u8 *, 0x92);
        temp_a2 = M2C_FIELD(var_a4, u8 *, 7) * 0xF;
        var_a4 += 1;
        temp_a2_2 = ((void *)Pes6MatchSquads) + (temp_a2 * 0x38);
        temp_a1_2 = ((void *)Pes6MatchSquads) + (temp_a1 * 0x348);
        M2C_FIELD(temp_a2_2, s32 *, 0x69D8) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0xD8);
        M2C_FIELD(temp_a1_2, s32 *, 0xD8) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0x69D8);
        M2C_FIELD(temp_a2_2, s32 *, 0x6918) = (s32) M2C_FIELD(temp_a2_2, s32 *, 0x18);
        M2C_FIELD(temp_a1_2, s32 *, 0x18) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0x6918);
    } while (var_a5 < 0xB);
}
