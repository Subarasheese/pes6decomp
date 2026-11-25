/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_camera_playback.h"

extern u8 D_00CBBE09[], D_00592740[];
extern s32 func_00208210(s32), func_001A5F20(s32);
extern void func_001AAF40(void *state, s8 enabled);

static inline void chooseShootoutPreset(s32 first) {
    func_002A7D00(10, (u8)(func_00BBB8C0(3) + first));
}

void func_00C97F20(void) {
    Pes6MatchPlayer *first;
    s32 i;
    func_002A96D0();
    func_002A9470(D_00CBBE09[0]);
    first = &Pes6MatchPlayers[1];
    /* The PAL routine resets the same field state on each iteration. */
    for (i = 0; i < 22; ++i)
        func_001AAF40(first->info->fieldState, 0);
    if (func_00208210(func_001A5F20(5)) == 0xb0) {
        chooseShootoutPreset(1);
    } else if (func_00208210(func_001A5F20(5)) == 0xb1) {
        chooseShootoutPreset(4);
    } else {
        chooseShootoutPreset(7);
    }
    if (!Pes6MatchPlayer_Get(D_00CBBE09[0])->info->field2D)
        func_002A9570(0);
    else
        func_002A9570(2);
    func_002A8830(0);
    func_002A6B20();
    D_00592740[0] = 3;
}
