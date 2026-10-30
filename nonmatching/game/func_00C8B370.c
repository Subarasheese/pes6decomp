/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B273E0(u8);                              /* extern */
s32 func_00B27400();                                /* extern */
s32 func_00BDA260();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];
extern char D_00591E4E[];
extern char D_00592800[];

s32 func_00C8B370(s32 arg0) {
    s32 sp90;
    M2C_UNK *var_s2;
    s32 *var_a0_3;
    s32 *var_a0_4;
    s32 *var_s1;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_s0;
    u8 var_s5;

    temp_s6 = func_00B27400();
    var_s4 = 0;
    var_s5 = (*(u8 *)D_00591E4C);
    var_s3 = 0;
    var_s2 = ((void *)D_00592800);
    var_s1 = &sp90;
    do {
        temp_s0 = M2C_FIELD(var_s2, u8 *, 0x10);
        if (func_00B273E0(temp_s0) != 0) {
            if (temp_s0 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) temp_s0 % 23;
            }
            if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x13) == arg0) {
                *var_s1 = (s32) temp_s0;
                var_s4 += 1;
                var_s1 += 4;
            }
        }
        var_s3 += 1;
        var_s2 += 0x28;
    } while (var_s3 < 8);
    switch (var_s4) {                               /* irregular */
    case 0:
        var_s5 = (u8) temp_s6;
        if (func_00BDA260() != 0) {
            if ((*(u8 *)D_00591E4E) == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = (s32) (*(u8 *)D_00591E4E) % 23;
            }
            if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), u8 *, 0x13) == arg0) {
                var_s5 = (*(u8 *)D_00591E4E);
            }
        }
        break;
    default:
        var_v1 = 0;
        if (var_s4 > 0) {
            var_a0_3 = &sp90;
loop_23:
            if (var_s5 != *var_a0_3) {
                var_v1 += 1;
                var_a0_3 += 4;
                if (var_v1 >= var_s4) {
                    goto block_29;
                }
                goto loop_23;
            }
        } else {
block_29:
            var_v1_2 = 0;
            if (var_s4 > 0) {
                var_a0_4 = &sp90;
loop_31:
                if (temp_s6 != *var_a0_4) {
                    var_v1_2 += 1;
                    var_a0_4 += 4;
                    if (var_v1_2 >= var_s4) {
                        goto block_37;
                    }
                    goto loop_31;
                }
                var_s5 = (u8) temp_s6;
            } else {
            case 1:
block_37:
                var_s5 = (u8) sp90;
            }
        }
        break;
    }
    if (var_s5 == 0xFF) {
        var_s5 = (u8) temp_s6;
    }
    if (((s32) var_s5 <= 0) || ((s32) var_s5 >= 0x17)) {
        var_s5 = 1;
    }
    return (s32) var_s5;
}
