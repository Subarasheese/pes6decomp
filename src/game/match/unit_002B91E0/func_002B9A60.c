/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
s32 func_002B9A60(const CueCommand *cue) {
    s32 i;
    u8 value = D_005E30E1[0];
    for (i = 0; i < 29; ++i) {
        if (D_005E2F70.alternateOrder[i] == value)
            break;
    }
    if (i + 1 > cue->first)
        D_005E2F9C[D_005E2F78[0]] = 0;
    return 0;
}
