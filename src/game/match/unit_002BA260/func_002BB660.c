/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
typedef struct {
    s32 opcode;
    const CueTrack *track;
} CallCommand;
s32 func_002BB660(const CallCommand *cmd) {
    const CueTrack *tracks[2] = {0};
    tracks[0] = cmd->track;
    func_002BBD00(tracks);
    return 0;
}
