/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern s32 func_00251BE0(void);
extern s32 func_0024F210(s32);
extern s32 func_0024F280(s32);
extern s32 func_0024F310(s32);

#define envelopeChannel D_003E9B48

void func_00250830(void) {
    static s32 envelopeChannel;
    envelopeChannel = 0;
    while (envelopeChannel < SOUND_PLAYBACK_CHANNELS) {
        if (!func_00251BE0() || !func_00250E70(envelopeChannel, SOUND_FIELD_FOLLOW_PAUSE)) {
            switch (func_00250E70(envelopeChannel, SOUND_FIELD_PHASE)) {
            case 1:
                if (func_0024F310(envelopeChannel) || func_0024F210(envelopeChannel)) {
                    if (!func_00250E70(envelopeChannel, SOUND_FIELD_ATTACK_DURATION))
                        func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 3);
                    else
                        func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 2);
                }
                break;
            case 2:
                D_00583F80[envelopeChannel].attackFrame++;
                if (func_00250E70(envelopeChannel, SOUND_FIELD_ATTACK_FRAME) >=
                    func_00250E70(envelopeChannel, SOUND_FIELD_ATTACK_DURATION)) {
                    func_002511D0(envelopeChannel, SOUND_FIELD_ATTACK_FRAME,
                                  func_00250E70(envelopeChannel, SOUND_FIELD_ATTACK_DURATION));
                    func_002511D0(envelopeChannel, SOUND_FIELD_DIRTY, 3);
                    func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 3);
                } else
                    func_002511D0(envelopeChannel, SOUND_FIELD_DIRTY, 1);
                break;
            case 4:
                D_00583F80[envelopeChannel].releaseFrame++;
                if (func_00250E70(envelopeChannel, SOUND_FIELD_RELEASE_FRAME) <
                        func_00250E70(envelopeChannel, SOUND_FIELD_RELEASE_DURATION) &&
                    func_00250E70(envelopeChannel, SOUND_FIELD_GAIN) && !func_0024F280(envelopeChannel))
                    func_002511D0(envelopeChannel, SOUND_FIELD_DIRTY, 1);
                else {
                    func_0024EFC0(envelopeChannel);
                    func_002511D0(envelopeChannel, SOUND_FIELD_RELEASE_FRAME,
                                  func_00250E70(envelopeChannel, SOUND_FIELD_RELEASE_DURATION));
                    func_002511D0(envelopeChannel, SOUND_FIELD_DIRTY, 2);
                    func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 6);
                }
                break;
            case 3:
                if (func_0024F280(envelopeChannel)) {
                    if (func_0024F210(envelopeChannel) && func_00250E70(envelopeChannel, SOUND_FIELD_STOP_ON_END))
                        func_0024EFC0(envelopeChannel);
                    func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 6);
                }
                break;
            case 6:
                if (func_0024F280(envelopeChannel)) {
                    s32 ch = envelopeChannel;
                    func_002511D0(ch, SOUND_FIELD_ATTACK_FRAME, 0);
                    func_002511D0(ch, SOUND_FIELD_RELEASE_FRAME, 0);
                    func_002511D0(ch, SOUND_FIELD_LEVEL, 100);
                    func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 7);
                }
                break;
            case 7:
                func_002511D0(envelopeChannel, SOUND_FIELD_COOLDOWN, 10);
                func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 8);
                break;
            case 8:
                D_00583F80[envelopeChannel].cooldown--;
                if (func_00250E70(envelopeChannel, SOUND_FIELD_COOLDOWN) <= 0)
                    func_002511D0(envelopeChannel, SOUND_FIELD_PHASE, 0);
                break;
            }
        }
        envelopeChannel++;
    }
}
