/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591E01[];
extern char D_00591E57[];
extern char D_00591F24[];

u8 func_00BD0950(void) {
    M2C_UNK *var_a6;
    s32 var_a1_2;
    s32 var_a7;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a1;
    u8 temp_v0;

    if ((*(u8 *)D_00591E57) == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = (s32) (*(u8 *)D_00591E57) % 23;
    }
    var_a1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
    if ((*(u8 *)D_00591F24) != 6) {
        if ((*(u8 *)D_00591E57) == 0xFF) {
            var_v1_2 = 1;
        } else {
            var_v1_2 = (s32) (*(u8 *)D_00591E57) % 23;
        }
        var_a7 = 1;
        var_a6 = ((void *)D_00591E01);
loop_10:
        temp_v0 = M2C_FIELD(var_a6, u8 *, 0x64);
        if (temp_v0 != 0xFF) {
            if (temp_v0 == 0xFF) {
                var_a1_2 = 1;
            } else {
                var_a1_2 = (s32) temp_v0 % 23;
            }
            var_a1 = ((void *)Pes6MatchPlayers) + (var_a1_2 * 0x240);
            if (M2C_FIELD(var_a1, u8 *, 0x13) == M2C_FIELD((((void *)Pes6MatchPlayers) + (var_v1_2 * 0x240)), u8 *, 0x13)) {
                goto block_16;
            }
        } else {
block_16:
            var_a7 += 1;
            var_a6 += 1;
            if (var_a7 < 3) {
                goto loop_10;
            }
        }
    }
    return *var_a1;
}
