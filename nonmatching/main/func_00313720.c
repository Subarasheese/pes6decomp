/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00341480(u8, u8);
extern s32 func_0030DC60(void *, s32);
extern s32 func_0030DC00(void *, s32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0032A3E0(u8, u8);                          /* extern */

s32 func_00313720(void *arg0, void *arg1, u8 arg2) {
    s8 var_v0;
    void *temp_s0;
    void *temp_s1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        M2C_FIELD(arg0, u8 *, 0) = arg2;
        M2C_FIELD(arg0, s8 *, 1) = Pes6MatchPlayer_GetSquadIndex(arg2);
        temp_s1 = arg1 + 0x74;
        M2C_FIELD(arg0, s8 *, 2) = 0;
        M2C_FIELD(arg0, s8 *, 3) = 0;
        M2C_FIELD(arg0, s8 *, 4) = 0;
        temp_s0 = arg1 + 0xB4;
        if (M2C_FIELD(arg1, s32 *, 0xB4) != 1) {
            goto block_14;
        }
        if (func_00341480(M2C_FIELD(temp_s1, u8 *, 4), M2C_FIELD(temp_s0, u8 *, 4)) != 0) {
            if (M2C_FIELD(arg1, s32 *, 0x4C) == 2) {
                if (func_0032A3E0(M2C_FIELD(temp_s1, u8 *, 4), M2C_FIELD(temp_s0, u8 *, 4)) != 0) {
                    var_v0 = 1;
                } else {
                    goto block_14;
                }
            } else {
                goto block_14;
            }
        } else {
block_14:
            var_v0 = 0;
        }
        M2C_FIELD(arg0, s8 *, 6) = var_v0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x6C) = 0xF0;
        func_001C48E8(arg0 + 0x64, 0, 8);
    }
    func_0030DC60(arg0 + 0xC, (s32) arg2);
    func_0030DC00(arg0 + 0x10, (s32) arg2);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x30) = 0x45200000;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x44800000;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    return 1;
}
