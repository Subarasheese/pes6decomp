/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030E540(s32);
extern u8 func_0030DBA0(void);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
extern int Pes6Ball_CopyPosition(int);
s32 func_0032D1C0(void *arg0) {
    f32 sp40;
    M2C_UNK (*temp_v0_2)(void *, s32);
    M2C_UNK (*temp_v0_3)(void *, s32, s32);
    M2C_UNK (*temp_v0_4)(void *, s32);
    s32 temp_s0;
    s32 temp_s1;
    u8 temp_v0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = M2C_FIELD(arg0, s32 *, 4);
    temp_s0 = func_003395B0(M2C_FIELD(arg0, void **, 8));
    Pes6Ball_CopyPosition((s32) &sp40);
    temp_v0 = func_0030E540(0);
    if (!(sp40 <= 1280.0f) || (((s32) temp_v0 >= 0xC) && (temp_v0 != 0xFF))) {
        M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
    }
    temp_v0_2 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32), 0x3C);
    if (temp_v0_2 != NULL) {
        temp_v0_2(temp_s2, temp_s0);
    }
    temp_v0_3 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32, s32), 0x4C);
    if (temp_v0_3 != NULL) {
        temp_v0_3(temp_s2, temp_s1, temp_s0);
    }
    temp_v0_4 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32), 0x58);
    if (temp_v0_4 != NULL) {
        temp_v0_4(temp_s2, temp_s0);
    }
    if ((M2C_FIELD(temp_s2, s32 *, 0x34) != 0) && (temp_s0 >= func_00340C80(25.0f))) {
        M2C_FIELD(temp_s2, s32 *, 0x34) = 0;
    }
    if ((M2C_FIELD(temp_s2, s32 *, 0x48) != 0) && ((Pes6MatchPlayer_GetSquadIndex(func_0030E540(0) & 0xFF) == 1) || (temp_s0 >= func_00340C80(10.0f)) || (func_0030DBA0() == 0))) {
        M2C_FIELD(temp_s2, s32 *, 0x48) = 0;
    }
    if (temp_s0 < func_00340C80(30.0f)) {
        return 1;
    }
    M2C_FIELD(temp_s2, s32 *, 0) = 0;
    return 0;
}
