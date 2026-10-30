/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

void func_00810BE0(void *arg0) {
    s32 temp_a1;
    s32 temp_a4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    u16 temp_a2;
    void *temp_a3;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a1 == 0xFF) {
        var_a2 = 1;
    } else {
        var_a2 = temp_a1 % 23;
    }
    temp_a4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_v1 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
    if (temp_a4 != 0xFF) {
        var_a3 = temp_a4 % 23;
    } else {
        var_a3 = 1;
    }
    temp_a3 = ((void *)Pes6MatchPlayers) + (var_a3 * 0x240);
    if (!(M2C_FIELD(temp_a3, f32 *, 0xE0) <= M2C_FIELD(temp_v1, f32 *, 0xE0)) && ((*(u8 *)D_00591E4C) == temp_a4) && (M2C_FIELD(arg0, f32 *, 0x50) != 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    }
    temp_a2 = M2C_FIELD(M2C_FIELD(temp_a3, void **, 4), u16 *, 0x30);
    if (((temp_a2 == 0x49) || (temp_a2 == 0x4F)) && (temp_a2 != 0x59) && (M2C_FIELD(temp_a3, f32 *, 0xE0) < M2C_FIELD(temp_v1, f32 *, 0xE0)) && (M2C_FIELD(arg0, f32 *, 0x54) != 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x50) = 1.0f;
    }
    if ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
    }
    var_a1 = (s32) (M2C_FIELD(temp_a3, f32 *, 0xE0) - M2C_FIELD(temp_v1, f32 *, 0xE0));
    if (var_a1 <= 0) {
        var_a1 = -var_a1;
    }
    if ((f32) var_a1 < 2000.0f) {
        var_v1 = (s32) (M2C_FIELD(temp_a3, f32 *, 0xE8) - M2C_FIELD(temp_v1, f32 *, 0xE8));
        if (var_v1 <= 0) {
            var_v1 = -var_v1;
        }
        if ((f32) var_v1 < 1000.0f) {
            M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
            return;
        }
        goto block_26;
    }
block_26:
    M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
}
