/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
void func_00BBBF40(u8 actor, u8 target) {
    s32 view = 0;
    if ((u8)actor < 23 && D_0058E5B4[Pes6MatchPlayer_Index((u8)actor)].info->field2D)
        view = 2;
    func_00BBC060(actor, target, 10, (u8)view);
}
