/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
s32 func_002BB4B0(const CueCommand *cmd) {
    if (D_005E2F9C[D_005E2F78[0]] == 1) {
        D_005E2F8C[D_005E2F78[0]] = cmd->first;
        return 1;
    }
    D_005E2F9C[D_005E2F78[0]] = 1;
    return 0;
}
