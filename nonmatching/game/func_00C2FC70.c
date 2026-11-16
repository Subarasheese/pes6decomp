/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_002C7930();                            /* extern */
s32 func_009A0270(u8 *, s32);                       /* extern */
s32 func_00C2AA90(u8 *, s32, u64, s32);             /* extern */
s32 func_00C2F9B0(u8 *, s32, u64, s32);             /* extern */
extern u8 D_00591BC3[];
extern u8 Pes6MatchClock_Remaining[];
extern u8 D_00591EF6[];
extern u8 D_00591EF8[];
extern u8 Pes6MatchSquads[];

s32 func_00C2FC70(u8 *arg0, s32 arg1, u64 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    u8 *temp_s0;
    u8 temp_a0;
    u8 temp_s1;
    u8 *temp_a0_2;
    u8 *temp_v1_2;

    temp_s1 = arg0[0];
    temp_s0 = D_00591EF6 + temp_s1;
    if ((*temp_s0 == 0) && (M2C_FIELD(arg0, s32 *, 0xC) == 0)) {
        func_002C7930();
    }
    temp_a0 = arg0[3];
    temp_v1 = ((u64) ((s64) temp_a0 << 0x3C) >> 0x3F) & 0xFF;
    if ((temp_v1 == 0) && (((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) == 0)) {
        var_s2 = 0;
    } else {
        arg2 = (u64) ((s64) arg0[3] << 0x3D) >> 0x3F;
        arg3 = temp_v1 & 0xFF;
        var_s2 = func_00C2AA90(arg0, arg1, arg2, arg3);
    }
    if ((D_00591BC3[0] - (*temp_s0 + D_00591EF8[temp_s1])) <= 0) {
        return var_s2;
    }
    var_a1 = 0;
    temp_a0_2 = Pes6MatchSquads + (temp_s1 * 0x6900);
    for (;;) {
        temp_v1_2 = temp_a0_2 + (arg0[var_a1 + 0x8C] * 0x348);
        if ((temp_v1_2[0xF8] == 0) && (temp_v1_2[0xF9] == 0)) {
            var_a1 += 1;
            if (var_a1 >= 0xB) {
                if (((func_009A0270(temp_a0_2, var_a1) & 0xFF) < 0x2E) && (M2C_FIELD(Pes6MatchClock_Remaining, s32 *, 0) == 0)) {
                    return var_s2;
                }
                return var_s2 | func_00C2F9B0(arg0, arg1, arg2, arg3);
            }
            continue;
        }
        return var_s2;
    }
}
