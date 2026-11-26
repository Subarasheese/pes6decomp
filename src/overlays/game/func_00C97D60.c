/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_camera_playback.h"

extern u8 D_00CBBE08[], D_00CBBE09[], D_00592740[];
extern s32 func_00208210(s32), func_001A5F20(s32);

static inline void chooseShootoutPreset(s32 first) {
    func_002A7D00(10, (u8)(func_00BBB8C0(3) + first));
}

void func_00C97D60(void) {
    func_002A96D0();
    func_002A9470(D_00CBBE09[0]);
    switch (D_00CBBE08[0]) {
    case 1:
    default:
        chooseShootoutPreset(16);
        break;
    case 2:
        if (func_00208210(func_001A5F20(5)) == 0xb3) {
            chooseShootoutPreset(19);
        } else {
            chooseShootoutPreset(22);
        }
        break;
    case 3:
        if (func_00208210(func_001A5F20(5)) == 0xb3 || func_00208210(func_001A5F20(5)) == 0xb4) {
            chooseShootoutPreset(13);
        } else {
            chooseShootoutPreset(10);
        }
        break;
    }
    if (!Pes6MatchPlayer_Get(D_00CBBE09[0])->info->field2D)
        func_002A9570(0);
    else
        func_002A9570(2);
    func_002A8830(0);
    func_002A6B20();
    D_00592740[0] = 2;
}
