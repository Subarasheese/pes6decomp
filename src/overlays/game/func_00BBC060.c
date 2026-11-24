/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
void func_00BBC060(u8 actor, u8 target, u8 flags, s32 view) {
    f32 frames;
    resetMatchCamera();
    if (flags & 2)
        D_005E24B0.mode = 4;
    else
        D_005E24B0.mode = 3;
    D_005E24B0.actor = actor;
    D_005E24B0.target = target;
    func_002A96D0();
    func_002A9470(actor);
    if (flags == 1) {
        func_002A94D0(28);
        Pes6MatchObj28_SetPosition(0.0f, (f32)(func_00BBB8C0(256) - 64), 0.0f);
        flags |= 10;
    }
    func_002A7D00(flags, target);
    func_002A9570(view);
    if (flags & 1) {
        func_002A8830(1);
        setActorCameraOffsets();
        func_002ABF20(actor, 29);
    }
    frames = func_002A95A0();
    D_005E24B0.duration = (f32)D_00591BE4[0] * frames / 60.0f;
}
