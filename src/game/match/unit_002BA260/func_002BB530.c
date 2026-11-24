/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
s32 func_002BB530(const CueCommand *cmd) {
    if (D_005E2F9C[D_005E2F78[0]] == 1) {
        D_005E2F7C[D_005E2F78[0]] = cmd->first;
    } else {
        D_005E2F7C[D_005E2F78[0]] = cmd->second;
    }
    return 1;
}
