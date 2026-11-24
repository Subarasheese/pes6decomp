/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
void func_00BBC290(u8 actor, s8 target, u8 flags, s32 view, f32 duration) {
    f32 frames;
    resetMatchCamera();
    if (flags & 2)
        D_005E24B0.mode = 4;
    else
        D_005E24B0.mode = 3;
    D_005E24B0.actor = actor;
    func_002A96D0();
    func_002A9470(actor);
    if (flags == 1) {
        func_002A94D0(28);
        Pes6MatchObj28_SetPosition(0.0f, (f32)(func_00BBB8C0(256) - 64), 0.0f);
        flags |= 2;
    }
    func_002A7F30(flags, 3, target, view, (u16)(60.0f * duration));
    if (flags & 1) {
        func_002A8830(1);
        setActorCameraOffsets();
        func_002ABF20(actor, 29);
    }
    frames = func_002A95A0();
    D_005E24B0.duration = (f32)D_00591BE4[0] * frames / 60.0f;
}
