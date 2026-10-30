/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_00592800[];

void func_0099C790(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK *var_a6;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a5;
    s32 var_a7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    u8 temp_t3;
    u8 temp_t3_2;
    u8 temp_t3_3;

    var_a2 = ((void *)D_0058E7F0);
    var_a1 = 0;
    do {
        M2C_FIELD(var_a2, s8 *, 0x24) = 1;
        var_a1 += 7;
        M2C_FIELD(var_a2, s8 *, 0x264) = 1;
        M2C_FIELD(var_a2, s8 *, 0x4A4) = 1;
        M2C_FIELD(var_a2, s8 *, 0x6E4) = 1;
        M2C_FIELD(var_a2, s8 *, 0x924) = 1;
        M2C_FIELD(var_a2, s8 *, 0xB64) = 1;
        M2C_FIELD(var_a2, s8 *, 0xDA4) = 1;
        var_a2 += 0xFC0;
    } while (var_a1 < 0xF);
    M2C_FIELD(var_a2, s8 *, 0x24) = 1;
    var_t2 = 0;
    var_t1 = 0;
    var_t0 = 0;
    var_a7 = 0;
    var_a5 = 0;
    var_a6 = ((void *)D_00592800);
    do {
        temp_t3 = M2C_FIELD(var_a6, u8 *, 0);
        if ((s32) temp_t3 < 8) {
            temp_t3_2 = M2C_FIELD(var_a6, u8 *, 0x10);
            if (temp_t3_2 == 0xFF) {
                var_s0 = 1;
            } else {
                var_s0 = (s32) temp_t3_2 % 23;
            }
            M2C_FIELD((((void *)Pes6MatchPlayers) + (var_s0 * 0x240)), s8 *, 0x24) = 0;
            if (M2C_FIELD(var_a6, u8 *, 1) == 0) {
                var_t2 = 1;
                if ((u8) M2C_FIELD(var_a6, u8 *, 3) < 2U) {
                    var_t0 = 1;
                }
            } else {
                var_t1 = 1;
                if ((u8) M2C_FIELD(var_a6, u8 *, 3) < 2U) {
                    var_a7 = 1;
                }
            }
        } else if (temp_t3 == 8) {
            temp_t3_3 = M2C_FIELD(var_a6, u8 *, 0x10);
            if (temp_t3_3 == 0xFF) {
                var_s0_2 = 1;
            } else {
                var_s0_2 = (s32) temp_t3_3 % 23;
            }
            M2C_FIELD((((void *)Pes6MatchPlayers) + (var_s0_2 * 0x240)), s8 *, 0x24) = 2;
        }
        var_a5 += 1;
        var_a6 += 0x28;
    } while (var_a5 < 8);
    var_a2_2 = 0;
    var_a3 = ((void *)D_0058E7F0);
    do {
        if (M2C_FIELD(var_a3, u8 *, 0x24) == 1) {
            if (M2C_FIELD(var_a3, u8 *, 0x12) == 0) {
                if (var_t2 != 0) {
                    if (var_t0 != 0) {
                        M2C_FIELD(var_a3, u8 *, 0x24) = 2U;
                    } else {
                        M2C_FIELD(var_a3, u8 *, 0x24) = 0U;
                    }
                }
            } else if (var_t1 != 0) {
                if (var_a7 != 0) {
                    M2C_FIELD(var_a3, u8 *, 0x24) = 2U;
                } else {
                    M2C_FIELD(var_a3, u8 *, 0x24) = 0U;
                }
            }
        }
        var_a2_2 += 1;
        var_a3 += 0x240;
    } while (var_a2_2 < 0x16);
}
