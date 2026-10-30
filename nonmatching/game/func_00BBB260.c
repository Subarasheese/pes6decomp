/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_00592800[];

void func_00BBB260(void) {
    u8 sp38;
    M2C_UNK *var_a0_2;
    M2C_UNK *var_a3_2;
    M2C_UNK *var_a4;
    M2C_UNK *var_a5_2;
    M2C_UNK *var_a7;
    s32 temp_t9_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a4_2;
    s32 var_a5;
    s32 var_a6;
    s32 var_s2;
    s32 var_t0;
    s32 var_t1;
    s32 var_v1;
    u8 *var_a0;
    u8 *var_a3;
    u8 *var_s1;
    u8 temp_t9;

    var_v1 = 8;
    var_a0 = &sp38;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    var_a5 = 0;
    var_t1 = 0;
    var_a4 = ((void *)D_00592800);
    var_a3 = &sp38;
    do {
        if (((u8) M2C_FIELD(var_a4, u8 *, 3) < 2U) && (M2C_FIELD(var_a4, u8 *, 0) != 8)) {
            var_a5 = 1;
            var_a6 = 0;
            var_t0 = 0;
            var_a7 = ((void *)D_0058E7F0);
            do {
                temp_t9 = M2C_FIELD(var_a7, u8 *, 0);
                if (temp_t9 == M2C_FIELD(var_a4, u8 *, 0x10)) {
                    temp_t9_2 = M2C_FIELD(var_a7, s32 *, 0x214);
                    if (temp_t9_2 < 3) {
                        M2C_FIELD(var_a7, s8 *, 0x218) = 0;
                    } else if (temp_t9_2 >= 8) {
                        if (temp_t9_2 < 0xD) {
                            M2C_FIELD(var_a7, s8 *, 0x218) = 2;
                        } else {
                            M2C_FIELD(var_a7, s8 *, 0x218) = 3;
                        }
                    } else {
                        M2C_FIELD(var_a7, s8 *, 0x218) = 1;
                    }
                    *var_a3 = M2C_FIELD(var_a7, u8 *, 0);
                } else {
                    var_s2 = 0;
                    if (var_t1 > 0) {
                        var_s1 = &sp38;
                        do {
                            if ((s8) *var_s1 == temp_t9) {
                                var_a6 = 1;
                            }
                            var_s2 += 1;
                            var_s1 += 1;
                        } while (var_s2 < var_t1);
                    }
                    if (var_a6 == 0) {
                        M2C_FIELD(var_a7, s8 *, 0x218) = 0;
                    }
                }
                var_t0 += 1;
                var_a7 += 0x240;
            } while (var_t0 < 0x16);
        }
        var_t1 += 1;
        var_a4 += 0x28;
        var_a3 += 1;
    } while (var_t1 < 8);
    if (var_a5 == 0) {
        var_a1 = 0;
        var_a0_2 = ((void *)Pes6MatchPlayers);
        do {
            M2C_FIELD(var_a0_2, s32 *, 0x214) = 0;
            var_a1 += 7;
            M2C_FIELD(var_a0_2, s8 *, 0x21F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x218) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0x454) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x45F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x458) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0x694) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x69F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x698) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0x8D4) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x8DF) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0x8D8) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0xB14) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xB1F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xB18) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0xD54) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xD5F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xD58) = 0;
            M2C_FIELD(var_a0_2, s32 *, 0xF94) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xF9F) = 0;
            M2C_FIELD(var_a0_2, s8 *, 0xF98) = 0;
            var_a0_2 += 0xFC0;
        } while (var_a1 < 0x10);
        M2C_FIELD(var_a0_2, s32 *, 0x214) = 0;
        M2C_FIELD(var_a0_2, s8 *, 0x21F) = 0;
        M2C_FIELD(var_a0_2, s8 *, 0x218) = 0;
        M2C_FIELD(var_a0_2, s32 *, 0x454) = 0;
        M2C_FIELD(var_a0_2, s8 *, 0x45F) = 0;
        M2C_FIELD(var_a0_2, s8 *, 0x458) = 0;
    }
    var_a4_2 = 0;
    var_a3_2 = ((void *)D_0058E7F0);
    do {
        if (M2C_FIELD(var_a3_2, u8 *, 0x218) == 0) {
            var_a2 = 0;
            var_a5_2 = ((void *)D_0058E7F0);
            do {
                if (M2C_FIELD(var_a5_2, u8 *, 0x21A) == M2C_FIELD(var_a3_2, u8 *, 0)) {
                    M2C_FIELD(var_a5_2, s8 *, 0x21B) = 0;
                    M2C_FIELD(var_a5_2, u8 *, 0x21A) = 0U;
                    M2C_FIELD(var_a5_2, s8 *, 0x219) = 0;
                }
                if (M2C_FIELD(var_a5_2, u8 *, 0x21D) == M2C_FIELD(var_a3_2, u8 *, 0)) {
                    M2C_FIELD(var_a5_2, s8 *, 0x21E) = 0;
                    M2C_FIELD(var_a5_2, u8 *, 0x21D) = 0U;
                    M2C_FIELD(var_a5_2, s8 *, 0x21C) = 0;
                }
                var_a2 += 1;
                var_a5_2 += 0x240;
            } while (var_a2 < 0xB);
        }
        var_a4_2 += 1;
        var_a3_2 += 0x240;
    } while (var_a4_2 < 0xB);
}
