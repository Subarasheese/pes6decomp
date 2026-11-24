/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_camera_playback.h"
void func_00BBC510(u8 actor, u8 other, u8 preset, f32 param, f32 duration) {
    resetMatchCamera();
    D_005E24B0.mode = 2;
    D_005E24B0.actor = actor;
    D_005E24B0.preset = preset;
    D_005E24B0.parameter = param;
    D_005E24B0.duration = duration * (f32)D_00591BE4[0];
    func_002A96D0();
    func_002A9470(actor);
    func_002A7A30((u8)preset);
    func_002A8940(param);
    func_002A8830(1);
    if (!matchPresetTracksActor(D_005E24B0.preset)) {
        func_001A4800(0);
        func_002A8830(3);
    } else {
        func_002A8830(1);
    }
    setActorCameraOffsets();
    func_002ABF20(actor, other);
}
