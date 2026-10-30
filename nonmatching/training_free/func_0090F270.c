/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0098EC40(M2C_UNK);                       /* extern */
s32 func_00990750(s32, M2C_UNK, f32, f32);          /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

s32 func_0090F270(void) {
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s2;

    var_s0 = 2;
    temp_v0 = func_0098EC40(0);
    var_s2 = temp_v0;
    var_s1 = 0;
    temp_f21 = (f32) M2C_FIELD(temp_v0, s16 *, 0x14);
    temp_f20 = 768.0f * temp_f21;
    do {
        if (func_00BDB8B0(var_s2) != 0) {
            temp_a1 = M2C_FIELD(var_s2, u8 *, 0x1D9);
            if (temp_a1 != 0) {
                temp_v1 = temp_a1 & 0xFF;
                if (temp_v1 == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = temp_v1 % 23;
                }
                temp_a0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
                if ((M2C_FIELD(temp_a0, u8 *, 0x1DD) != 0x27) || ((temp_v1_2 = M2C_FIELD(temp_a0, u8 *, 0x1DE), (temp_v1_2 != 7)) && (temp_v1_2 != 0xA) && (temp_v1_2 != 5))) {
                    goto block_11;
                }
            } else {
block_11:
                if ((M2C_FIELD(var_s2, u8 *, 0x16) != 0xB) && (M2C_FIELD(var_s2, u8 *, 0x1D4) == 3)) {
                    temp_v1_3 = temp_a1 & 0xFF;
                    switch (temp_v1_3) {            /* irregular */
                    case 0x0:
                        if (var_s0 == 2) {
block_28:
                            var_s0 = 1;
                        }
                        break;
                    case 0xFF:
                        var_a0_2 = 1;
block_20:
                        temp_v0_2 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
                        if ((M2C_FIELD(var_s2, f32 *, 0xE0) * temp_f21) <= (M2C_FIELD(temp_v0_2, f32 *, 0xE0) * temp_f21)) {
                            if (((u32) M2C_FIELD((var_s2 + (M2C_FIELD(temp_v0_2, u8 *, 0) * 4)), u32 *, 0x158) >= 0x640001U) && (var_s0 == 2)) {
                                goto block_28;
                            }
                        } else if (((u32) M2C_FIELD((var_s2 + (M2C_FIELD(temp_v0_2, u8 *, 0) * 4)), u32 *, 0x158) >= 0x240001U) && (var_s0 == 2)) {
                            goto block_28;
                        }
                        break;
                    default:
                        var_a0_2 = temp_v1_3 % 23;
                        goto block_20;
                    }
                    if (!(func_00990750((M2C_FIELD(var_s2, u8 *, 0x13) ^ 1) & 0xFF, 0x600, M2C_FIELD(var_s2, f32 *, 0xE0) + temp_f20, M2C_FIELD(var_s2, f32 *, 0xE8)) & 0xFF)) {
                        var_s0 = 0;
                    }
                }
            }
        }
        var_s1 += 1;
        var_s2 += 0x240;
    } while (var_s1 < 0xA);
    return var_s0 & 0xFF;
}
