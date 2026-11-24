/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern s32 D_003E9B50;
extern s32 func_00251BB0(void);
extern s32 func_00251BC0(void);
extern s32 func_00251BD0(void);
extern s32 func_00251A60(void);

void func_002503E0(s32 channel) {
    if (func_00250E70(channel, SOUND_FIELD_DIRTY) == 2)
        D_003E9B50 = 0;
    else
        D_003E9B50 = func_00250E70(channel, SOUND_FIELD_BASE_VOLUME);
    if (func_00250E70(channel, SOUND_FIELD_USE_GROUP_GAIN)) {
        switch (func_00250E70(channel, SOUND_FIELD_KIND)) {
        case 0:
            D_003E9B50 = D_003E9B50 * func_00251BD0() / 15;
            break;
        case 1:
            D_003E9B50 = D_003E9B50 * func_00251BC0() / 15;
            break;
        case 2:
            D_003E9B50 = D_003E9B50 * func_00251BB0() / 15;
            break;
        }
    }
    if (func_00250E70(channel, SOUND_FIELD_PHASE) == 2) {
        D_003E9B50 = D_003E9B50 * func_00250E70(channel, SOUND_FIELD_ATTACK_FRAME) /
                     func_00250E70(channel, SOUND_FIELD_ATTACK_DURATION);
    } else if (func_00250E70(channel, SOUND_FIELD_PHASE) == 4) {
        if (func_00250E70(channel, SOUND_FIELD_ATTACK_FRAME) !=
            func_00250E70(channel, SOUND_FIELD_ATTACK_DURATION)) {
            D_003E9B50 = D_003E9B50 * func_00250E70(channel, SOUND_FIELD_ATTACK_FRAME) /
                         func_00250E70(channel, SOUND_FIELD_ATTACK_DURATION);
        }
        D_003E9B50 = D_003E9B50 *
                     (func_00250E70(channel, SOUND_FIELD_RELEASE_DURATION) -
                      func_00250E70(channel, SOUND_FIELD_RELEASE_FRAME)) /
                     func_00250E70(channel, SOUND_FIELD_RELEASE_DURATION);
    } else if (func_00250E70(channel, SOUND_FIELD_PHASE) == 3) {
        func_00250E70(channel, SOUND_FIELD_DIRTY);
    }
    D_003E9B50 = D_003E9B50 * func_00250E70(channel, SOUND_FIELD_LEVEL) / 100;
    D_003E9B50 = D_003E9B50 * func_00251A60() / 100;
    if (D_003E9B50 < 0)
        D_003E9B50 = 0;
    if (D_003E9B50 > 127)
        D_003E9B50 = 127;
    func_002511D0(channel, SOUND_FIELD_GAIN, D_003E9B50);
}
