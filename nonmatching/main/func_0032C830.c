/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E780(void);
extern s32 func_00340C80(f32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u8 func_0030E540(s32);
s32 func_0032C830(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_v1;

    if (func_0030E780() != 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x44);
        if (func_00340C80(10.0f) >= temp_s0) {
            temp_v0 = Pes6MatchPlayer_GetSquadIndex(func_0030E540(0) & 0xFF);
            temp_v1 = M2C_FIELD(arg1, u8 *, 0x60);
            if ((temp_v1 != temp_v0) && (temp_v0 == (temp_v1 ^ 1))) {
                M2C_FIELD(arg0, s32 *, 0x78) = 1;
                return 1;
            }
            goto block_8;
        }
        M2C_FIELD(arg0, s32 *, 0x78) = 0;
        var_v0 = 0;
        goto block_9;
    }
block_8:
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    var_v0 = 1;
block_9:
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    return var_v0;
}
