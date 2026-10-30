/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030E540(s32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern s32 func_00340C80(f32);
extern s32 Pes6Ball_GetPositionX(void *);
extern s32 func_0030D990(s32);
s32 func_0032CFF0(void *arg0, s32 arg1) {
    f32 sp3C;
    s32 temp_v0;
    u8 temp_s1;

    if (func_00340C80(25.0f) >= arg1) {
        temp_s1 = func_0030E540(0) & 0xFF;
        if (Pes6MatchPlayer_GetSquadIndex(temp_s1) != 1) {
            temp_v0 = func_0030D990((s32) temp_s1);
            if ((temp_v0 != 0) && (temp_v0 != 1)) {
                Pes6Ball_GetPositionX(&sp3C);
                if (!(sp3C < -8079.0005f)) {
                    M2C_FIELD(arg0, s32 *, 0x38) = 0;
                    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
                }
                return 0;
            }
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return 0;
}
