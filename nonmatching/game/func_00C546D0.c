/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(char *, M2C_UNK);
M2C_UNK func_00209A00(char *, M2C_UNK, M2C_UNK);
M2C_UNK func_00987BF0(s32, char *, M2C_UNK);
s32 func_009B30B0(u16, u16);
s32 func_00A9DFF0(char *, M2C_UNK);
extern f32 *D_003E74CC;
extern char *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char Pes6MatchState_Current[];
extern char D_00591E53[];

s32 func_00C546D0(char *arg0) {
    s32 var_a0;
    s32 var_s1;
    s32 dx;
    s32 dz;
    u8 temp_v1;
    char *temp_s0;
    f32 q;
    s32 r;
    s32 cv;

    if (*(u8 *)arg0 != *(u8 *)Pes6MatchState_Current) {
        return 0;
    }
    if (*(s32 *)(arg0 + 0x1C) >= 0xC01) {
        return 0;
    }
    if (*(f32 *)(Pes6Ball_Current + 0x14) < -56.0f) {
        return 0;
    }
    func_00987BF0((*(u8 *)(arg0 + 0x13) ^ 1) & 0xFF, arg0, 0);
    temp_v1 = *(u8 *)(D_00591E53 + ((*(u8 *)(arg0 + 0x13) ^ 1) * 2));
    if (temp_v1 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32)temp_v1 % 23;
    }
    temp_s0 = Pes6MatchPlayers + var_a0 * 0x240;
    var_s1 = 0;
    if (*(u16 *)(*(char **)(temp_s0 + 4) + 0x30) == 0x1CC) {
        var_s1 = 1;
    } else if ((func_009B30B0(*(u16 *)(arg0 + 0x26), *(u16 *)(temp_s0 + 0x26)) & 0xFFFF) < 0x20) {
        dx = (s32)(*(f32 *)(arg0 + 0xE0) - *(f32 *)(temp_s0 + 0xE0));
        dz = (s32)(*(f32 *)(arg0 + 0xE8) - *(f32 *)(temp_s0 + 0xE8));
        if ((u32)(dx * dx + dz * dz) < 0x31001U) {
            var_s1 = 2;
        }
    }
    if ((var_s1 & 0xFF) == 0) {
        return 0;
    }
    func_00209A00(*(char **)(arg0 + 4), 0x1B9, 8);
    *(s32 *)(arg0 + 0xE4) = 0;
    func_00207390(*(char **)(arg0 + 4), 8);
    r = func_00A9DFF0(arg0, 0xB4);
    q = (f32)r / (*D_003E74CC / *(f32 *)(*(char **)(arg0 + 4) + 0x28));
    if (q >= 2.1474836e9f) {
        cv = (s32)(q - 2.1474836e9f) | 0x80000000;
    } else {
        cv = (s32)q;
    }
    *(s16 *)(arg0 + 0x38) = (s16)(cv & 0xFFFF);
    *(s8 *)(arg0 + 0x16) = 0x83;
    *(s16 *)(arg0 + 0x18) = 0x71;
    return 1;
}
