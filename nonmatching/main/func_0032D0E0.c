/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0030D990(s32);                             /* extern */
s32 func_0030E540(M2C_UNK);                         /* extern */
s32 Pes6MatchPlayer_GetSquadIndex(s32);                             /* extern */
M2C_UNK Pes6Ball_GetPositionX(f32 *);                       /* extern */
s32 func_00340C80(M2C_UNK);                         /* extern */
extern M2C_UNK func_0032CFF0;

s32 func_0032D0E0(void *arg0, s32 arg1) {
    f32 sp4C;
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = func_0030E540(0) & 0xFF;
    if (Pes6MatchPlayer_GetSquadIndex(temp_s2) != 1) {
        Pes6Ball_GetPositionX(&sp4C);
        if (sp4C < 2048.0f) {
            temp_v0 = func_0030D990(temp_s2);
            if ((temp_v0 != 0) && (temp_v0 != 1)) {
                if (arg1 < func_00340C80(0x41700000)) {
                    return 0;
                }
                goto block_8;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &func_0032CFF0;
            return 1;
        }
    }
block_8:
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = NULL;
    return 0;
}
