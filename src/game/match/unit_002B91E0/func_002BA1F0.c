/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
#include "pes6/match_cue_script.h"
extern s8 D_005E2FC4[];
s32 func_002BA1F0(void) {
    u8 id = D_005E30E1[0];
    if (id < 23 && D_0058E5B4[Pes6MatchPlayer_Index(id)].info->field2D)
        D_005E2FC4[0] = 2;
    return 0;
}
