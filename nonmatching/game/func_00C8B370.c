/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00B273E0(u8);
extern s32 func_00B27400(void);
extern s32 func_00BDA260(s32);
extern u8 Pes6MatchPlayers[];
extern u8 D_00591E4C[];
extern u8 D_00591E4E[];
extern u8 D_00592800[];

s32 func_00C8B370(s32 arg0) {
    s32 sp90[8];
    u8 *var_s2;
    s32 *var_s1;
    s32 temp_s6;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    s32 var_s5;
    u8 temp_s0;
    u8 a1;

    temp_s6 = func_00B27400();
    var_s4 = 0;
    var_s5 = D_00591E4C[0];
    var_s3 = 0;
    var_s2 = D_00592800;
    var_s1 = sp90;
    do {
        temp_s0 = var_s2[0x10];
        var_a0 = temp_s0;
        if (func_00B273E0(temp_s0) != 0) {
            if (temp_s0 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) temp_s0 % 23;
            }
            if (Pes6MatchPlayers[var_a0 * 0x240 + 0x13] == arg0) {
                *var_s1 = (s32) temp_s0;
                var_s4 += 1;
                var_s1 += 1;
            }
        }
        var_s3 += 1;
        var_s2 += 0x28;
    } while (var_s3 < 8);
    if (var_s4 == 1) {
        var_s5 = sp90[0];
    } else if (var_s4 == 0) {
        var_s5 = temp_s6;
        if (func_00BDA260(var_a0) != 0) {
            a1 = D_00591E4E[0];
            if (a1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) a1 % 23;
            }
            if (Pes6MatchPlayers[var_a0 * 0x240 + 0x13] == arg0) {
                var_s5 = a1;
            }
        }
    } else {
        for (var_v1 = 0; var_v1 < var_s4; var_v1++) {
            if (var_s5 == sp90[var_v1]) {
                goto done;
            }
        }
        for (var_v1 = 0; var_v1 < var_s4; var_v1++) {
            if (temp_s6 == sp90[var_v1]) {
                var_s5 = temp_s6;
                goto done;
            }
        }
        var_s5 = sp90[0];
    }
done:
    if (var_s5 == 0xFF) {
        var_s5 = temp_s6;
    }
    if ((var_s5 <= 0) || (var_s5 >= 0x17)) {
        var_s5 = 1;
    }
    return var_s5;
}
