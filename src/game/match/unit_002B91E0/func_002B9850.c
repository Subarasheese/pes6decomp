/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_filter.h"
extern s32 func_002AC020(s32, void *, f32);
s32 func_002B9850(const MatchCue *cue) {
    if (!func_002AC020(cue->flags, D_005E30E0, 0.001f * (f32)cue->scale))
        D_005E2F9C[D_005E2F78[0]] = 0;
    return 0;
}
