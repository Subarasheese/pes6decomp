/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E780(void);
extern s32 func_00340C80(f32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern u8 func_0030E540(s32);
extern M2C_UNK func_0032C830;

s32 func_0032C8E0(void *arg0, void *arg1) {
    s32 temp_s3;
    s32 temp_v0;

    if (func_0030E780() != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        temp_v0 = Pes6MatchPlayer_GetSquadIndex(func_0030E540(0) & 0xFF);
        if (temp_v0 != 0xFF) {
            temp_s3 = M2C_FIELD(arg0, s32 *, 0x44);
            if (func_00340C80(10.0f) >= temp_s3) {
                if (M2C_FIELD(arg1, u8 *, 0x60) == temp_v0) {
                    return 0;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x74) = &func_0032C830;
                return 1;
            }
            M2C_FIELD(arg0, s32 *, 0x78) = 0;
            M2C_FIELD(arg0, M2C_UNK **, 0x74) = NULL;
            return 0;
        }
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x74) = NULL;
    return 0;
}
