/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005E3A94[];

void func_008106D0(void *arg0) {
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a4;
    s32 var_a1;
    s32 var_a2;
    u16 temp_a1_2;
    void *temp_a2;
    void *temp_a3;

    temp_a4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a4 == 0xFF) {
        var_a1 = 1;
    } else {
        var_a1 = temp_a4 % 23;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_a3 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    if (temp_a1 != 0xFF) {
        var_a2 = temp_a1 % 23;
    } else {
        var_a2 = 1;
    }
    temp_a2 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
    if (!(M2C_FIELD(temp_a3, f32 *, 0xE0) <= M2C_FIELD(temp_a2, f32 *, 0xE0)) && (((*(u8 *)D_00591E4C) == temp_a4) || (M2C_FIELD(arg0, f32 *, 0x54) != 0.0f))) {
        M2C_FIELD(arg0, f32 *, 0x48) = 1.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x54) != 0.0f) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    if (((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(temp_a3, f32 *, 0xE0) < M2C_FIELD(temp_a2, f32 *, 0xE0))) {
        M2C_FIELD(arg0, f32 *, 0x48) = 0.0f;
    }
    if (((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, s32 *, 0xC)) || (((*(s32 *)D_005E3A94) != 0) && (M2C_FIELD(arg0, f32 *, 0x48) == 0.0f))) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
    }
    temp_a2_2 = M2C_FIELD(arg0, s32 *, 8);
    if (((((*(u8 *)D_00591E19) == temp_a2_2) && ((temp_a1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_a1_2 == 4)) || (temp_a1_2 == 1) || (temp_a1_2 == 2) || (temp_a1_2 == 3))) || ((*(u8 *)D_00591E4C) == temp_a2_2)) && (M2C_FIELD(arg0, f32 *, 0x50) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x48) != 0.0f) && ((*(s32 *)D_005E3A94) != 0)) {
        M2C_FIELD(arg0, f32 *, 0x50) = 1.0f;
    }
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4) && (M2C_FIELD(arg0, f32 *, 0x54) == 0.0f)) {
        M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
    }
}
