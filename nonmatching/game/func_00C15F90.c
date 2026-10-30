/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E7A08;
extern char Pes6MatchPlayers[];
extern char D_00CCAD70[];

void func_00C15F90(void) {
    s32 temp_a4_3;
    s32 var_a2;
    s32 var_a5;
    s32 var_a6;
    u8 temp_a4_2;
    void *temp_a4;
    void *var_a1;
    void *var_a7;

    var_a2 = 0xA;
    do {
        temp_a4 = D_003E7A08 + ((var_a2 - 1) << 6);
        var_a1 = temp_a4 + 4;
        if (M2C_FIELD(temp_a4, s32 *, 4) != 0) {
            temp_a4_2 = M2C_FIELD(var_a1, u8 *, 4);
            if (temp_a4_2 == 0xFF) {
                var_a5 = 1;
            } else {
                var_a5 = (s32) temp_a4_2 % 23;
            }
            var_a6 = 8;
            var_a7 = ((void *)D_00CCAD70) + (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a5 * 0x240)), u8 *, 0x12) << 6) + 4;
            do {
                var_a6 -= 1;
                temp_a4_3 = M2C_FIELD(var_a1, s32 *, 4);
                M2C_FIELD(var_a7, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
                var_a1 += 8;
                M2C_FIELD(var_a7, s32 *, 4) = temp_a4_3;
                var_a7 += 8;
            } while (var_a6 > 0);
        }
        var_a2 -= 1;
    } while (var_a2 > 0);
}
