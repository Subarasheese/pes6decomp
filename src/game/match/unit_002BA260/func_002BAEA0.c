/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
extern s8 D_005E3290[];
static inline u8 playerWeight(u8 slot) {
    if (slot >= 29)
        return 0;
    return D_005E3290[slot];
}
s32 func_002BAEA0(const CueCommand *cmd) {
    u8 weight = playerWeight(D_005E30E1[0]);
    s32 first = cmd->first, range = cmd->second - first;
    f32 offset = (f32)(range * weight) / 100.0f;
    D_005E2FA8[0] += (f32)first + offset;
    return 0;
}
