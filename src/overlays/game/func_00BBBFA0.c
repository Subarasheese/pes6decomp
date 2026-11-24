/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
extern s32 func_00BBCE80(u8 actor, s32 target, s32 quadrant);
s32 func_00BBBFA0(u8 actor, u8 target) {
    MatchPosition pos;
    s32 quadrant;
    func_002A11B0(&pos, actor);
    if (pos.x >= 0.0f) {
        if (pos.z >= 0.0f)
            quadrant = 2;
        else
            quadrant = 3;
    } else {
        if (pos.z >= 0.0f)
            quadrant = 0;
        else
            quadrant = 1;
    }
    if (func_00BBCE80(actor, target, quadrant)) {
        func_00BBC060(actor, target, 1, (u8)quadrant);
        return 1;
    }
    return 0;
}
