/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_camera_playback.h"

enum { CAMERA_PRESET_COUNT = 43 };
extern u32 func_00BF6270(void);
extern void func_002AD5A0(u8 actor, u16 limit, s32 *orderedPresets);
extern u16 func_002AD880(u8 actor, s32 preset);

s32 func_00C97580(void) {
    s32 ordered[CAMERA_PRESET_COUNT];
    s32 preset;
    Pes6MatchPlayer *ball, *actor;
    s32 index;
    if (func_00BF6270() != 255)
        index = (s32)func_00BF6270() % 23;
    else
        index = 1;
    ball = Pes6MatchPlayers;
    actor = &ball[index];
    func_002AD5A0(actor->id, 0x1000, ordered);
    preset = ordered[0];
    switch (preset) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 12:
    case 19:
    case 13:
    case 16:
    case 20:
    case 23:
    case 27:
    case 29:
    case 30:
    case 32:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 41:
        return 0;
    default:
        break;
    }
    if (func_002AD880(actor->id, preset) <= 0x1000) {
        func_002A7A30((u8)preset);
        return 1;
    }
    func_002AD5A0(ball->id, 0x1000, ordered);
    preset = ordered[0];
    switch (preset) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 12:
    case 19:
    case 13:
    case 16:
    case 20:
    case 23:
    case 27:
    case 29:
    case 30:
    case 32:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 41:
        return 0;
    default:
        break;
    }
    if (func_002AD880(ball->id, preset) <= 0x1000) {
        func_002A7A30((u8)preset);
        return 1;
    }
    return 0;
}
