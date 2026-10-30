/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_009924B0(void) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 var_v0;
    void *temp_a1;
    void *temp_s0;

    if ((*(u8 *)D_00591E4C) == 0) {
        temp_v1 = M2C_FIELD(D_003E7A08, u8 *, 8);
        if ((temp_v1 != 0) && (temp_v1 != 0xFF)) {
            if ((M2C_FIELD(D_003E7A08, s32 *, 4) == 0xA) && (M2C_FIELD(D_003E7A08, s32 *, 0x44) == 4)) {
                var_v0 = M2C_FIELD(D_003E7A08, u8 *, 0x48);
                goto block_4;
            }
            goto block_32;
        }
        goto block_32;
    }
    var_v0 = (*(u8 *)D_00591E4C) & 0xFF;
block_4:
    temp_v1_2 = var_v0 & 0xFF;
    var_s2 = 0;
    var_s1 = 0;
    if (temp_v1_2 != 0xFF) {
        var_a0 = temp_v1_2 % 23;
    } else {
        var_a0 = 1;
    }
    var_s3 = 0;
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        temp_v1_3 = M2C_FIELD((temp_s0 + ((M2C_FIELD(temp_s0, u8 *, 0x13) ^ 1) * 0xB) + var_s3), u8 *, 0x1B4);
        if (temp_v1_3 == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) temp_v1_3 % 23;
        }
        temp_a1 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
        temp_v1_4 = M2C_FIELD(temp_a1, u8 *, 0x16);
        if ((temp_v1_4 != 0x43) && (temp_v1_4 != 0xF) && (temp_v1_4 != 0xC)) {

        } else if ((u32) M2C_FIELD((temp_s0 + (M2C_FIELD(temp_a1, u8 *, 0) * 4)), u32 *, 0x158) < 0x10000U) {
            var_s1 += 1;
            if ((func_009B3070((s32) M2C_FIELD(temp_s0, u16 *, 0x26), (s32) M2C_FIELD((temp_a1 + (M2C_FIELD(temp_s0, u8 *, 0) * 2)), u16 *, 0x128)) & 0xFFFF) < 0x2800) {
                var_s2 = 1;
            }
        }
        var_s3 += 1;
    } while (var_s3 < 2);
    if (var_s1 != 0) {
        if (var_s1 < 2) {
            return (var_s2 == 0) ? 1 : 3;
        }
        return 2;
    }
block_32:
    return 0;
}
