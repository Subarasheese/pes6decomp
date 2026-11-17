/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_009D4890(void *, s32, void *, s32);
extern s32 func_009F42B0(void *, s32);
extern s32 func_00BBB780(s32);
extern s32 func_00BBB8C0(s32);
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_005926DC[];
extern char Pes6MatchSquads[];

s32 func_009D4560(void *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_a2;
    u8 temp_a1;
    void *temp_a2;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x11);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_a3 = M2C_FIELD(arg0, u8 *, 0x12) * 0x6900;
    temp_a2 = ((void *)Pes6MatchSquads) + temp_a3;
    temp_s0 = M2C_FIELD(((temp_a1 * 0x348) + temp_a2), u8 *, 0xAF) & 0x7F;
    if (((temp_v1 + M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)) < 0x4800) && (temp_s0 >= 0x41)) {
        return 0;
    }
    if (temp_v1 < 0x400) {
        return 0;
    }
    if (func_009D4890(arg0, temp_a1 * 0xF, temp_a2, temp_a3) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) {
            if (func_00BBB780((s16) (temp_s0 + 0xA)) != 0) {
                return 0;
            }
        }
        if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x1300) && !(M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) func_009F42B0(arg0, -0x180)) && (M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x80))) {
            var_v0 = (temp_s0 + 0x1E) - func_00BBB8C0(0x14);
        } else {
            var_v0 = (temp_s0 + 0xA) - func_00BBB8C0(0x14);
        }
        if (!(func_00BBB780((s16) (var_v0 & 0xFFFF)) & 0xFF)) {
            return 1;
        }
        return 0;
    }
    if (temp_s0 >= 0x41) {
        return 0;
    }
    temp_a0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    if (temp_a0 < 0x3000) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) && (temp_a0 < 0x4000)) {
        return 0;
    }
    var_a2 = temp_s0 & 0xFFFF;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) < (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) && !(M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) func_009F42B0(arg0, -0x180)) && (M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x80))) {
        var_a2 = (temp_s0 + 0x1E) & 0xFFFF;
    } else if ((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6A) >> 7) != 0) {
        var_a2 = (var_a2 + 0xA) & 0xFFFF;
    }
    if (!(func_00BBB780((s16) var_a2) & 0xFF)) {
        return 1;
    }
    return 0;
}
