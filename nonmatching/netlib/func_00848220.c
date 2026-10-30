/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00848580(void *, void *, s32);         /* extern */
extern char Pes6MatchPlayers[];
extern char D_005927B8[];
extern char D_005927C8[];
extern char Pes6MatchSquads[];

void func_00848220(void *arg0) {
    s32 temp_a2_3;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_a2_2;
    void *temp_a7;
    void *temp_s0;
    void *temp_t0;
    void *var_s1;

    temp_a2 = M2C_FIELD(arg0, u8 *, 1);
    if (temp_a2 != 0xFF) {
        var_a2 = (s32) temp_a2 % 23;
    } else {
        var_a2 = 1;
    }
    temp_a2_2 = M2C_FIELD(arg0, u8 *, 3);
    temp_t0 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
    if (temp_a2_2 != 0xFF) {
        var_a3 = (s32) temp_a2_2 % 23;
    } else {
        var_a3 = 1;
    }
    var_s2 = 0;
    temp_a7 = ((void *)Pes6MatchPlayers) + (var_a3 * 0x240);
    var_s1 = arg0;
    M2C_FIELD(((void *)D_005927C8), u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(((void *)D_005927C8), u8 *, 1) = (u8) M2C_FIELD(temp_t0, u8 *, 0);
    M2C_FIELD(((void *)D_005927C8), u8 *, 2) = (u8) M2C_FIELD(temp_t0, u8 *, 0x12);
    M2C_FIELD(((void *)D_005927C8), u8 *, 3) = (u8) M2C_FIELD(temp_t0, u8 *, 0x11);
    M2C_FIELD(((void *)D_005927B8), u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(((void *)D_005927B8), u8 *, 1) = (u8) M2C_FIELD(temp_a7, u8 *, 0);
    M2C_FIELD(((void *)D_005927B8), u8 *, 2) = (u8) M2C_FIELD(temp_a7, u8 *, 0x12);
    M2C_FIELD(((void *)D_005927B8), u8 *, 3) = (u8) M2C_FIELD(temp_a7, u8 *, 0x11);
    do {
        temp_a0 = M2C_FIELD((arg0 + var_s2), u8 *, 4);
        if (((s32) temp_a0 >> 7) & 1) {
            temp_a2_3 = ((s32) temp_a0 >> 6) & 1;
            temp_s0 = ((temp_a0 & 0x1F) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2_3 * 0x6900));
            func_00848580(var_s1 + 8, temp_s0 + 0xF0, temp_a2_3 * 0xF);
            M2C_FIELD(temp_s0, s8 *, 0xD4) = (s8) ((u64) ((s64) M2C_FIELD(var_s1, u8 *, 0x12) << 0x3C) >> 0x3F);
        }
        var_s2 += 1;
        var_s1 += 0x10;
    } while (var_s2 < 4);
}
