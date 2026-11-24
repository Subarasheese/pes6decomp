/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
void func_00BBBD40(u8 actor, f32 duration) {
    MatchPosition pos;
    s32 preset;
    func_002A11B0(&pos, actor);
    if (pos.z < 0.0f) {
        if (pos.x < 0.0f)
            preset = 2;
        else
            preset = 3;
    } else
        preset = 26;
    resetMatchCamera();
    D_005E24B0.mode = 5;
    D_005E24B0.actor = actor;
    D_005E24B0.preset = preset;
    D_005E24B0.parameter = 18000.0f;
    D_005E24B0.duration = (f32)D_00591BE4[0] * duration;
    func_002A96D0();
    func_002A9470(actor);
    func_002A7A30((u8)preset);
    func_002A8940(18000.0f);
    func_002A8830(1);
    func_002A6B20();
    func_00295C90();
    func_00295DE0();
}
