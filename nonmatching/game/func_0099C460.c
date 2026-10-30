/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00592800[];
extern char D_00592810[];

void func_0099C460(s8 arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_t3;
    s32 var_v1;
    s8 *var_v1_2;
    u8 temp_a5;
    u8 temp_a6;
    void *temp_a7;

    if (arg0 < 0x17) {
        if (arg0 != -1) {
            var_a1 = arg0 % 23;
        } else {
            var_a1 = 1;
        }
        var_v1 = 0xFF;
        var_a1_2 = 0xFF;
        var_t3 = 0;
loop_5:
        temp_t1 = var_t3 & 0xFF;
        temp_a7 = ((void *)D_00592800) + (temp_t1 * 0x28);
        temp_a6 = M2C_FIELD(temp_a7, u8 *, 0);
        if (((s32) temp_a6 < 9) && (temp_a5 = M2C_FIELD(temp_a7, u8 *, 1), (temp_a5 != 0xFF))) {
            if (arg0 != M2C_FIELD(temp_a7, u8 *, 0x10)) {
                if ((M2C_FIELD(temp_a7, u8 *, 3) != 0) && (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), u8 *, 0x12) == temp_a5)) {
                    if (temp_a6 == 8) {
                        if ((var_v1 & 0xFF) == 0xFF) {
                            var_v1 = temp_t1;
                        }
                    } else if ((var_a1_2 & 0xFF) == 0xFF) {
                        var_a1_2 = temp_t1;
                    }
                }
                goto block_16;
            }
        } else {
block_16:
            var_t3 = (var_t3 + 1) & 0xFF;
            if (var_t3 >= 8) {
                temp_a2 = var_a1_2 & 0xFF;
                if (temp_a2 == 0xFF) {
                    temp_a2_2 = var_v1 & 0xFF;
                    if (temp_a2_2 == 0xFF) {
                        return;
                    }
                    var_v1_2 = ((void *)D_00592810) + (temp_a2_2 * 0x28);
                    goto block_22;
                }
                var_v1_2 = ((void *)D_00592810) + (temp_a2 * 0x28);
block_22:
                *var_v1_2 = arg0;
            } else {
                goto loop_5;
            }
        }
    }
}
