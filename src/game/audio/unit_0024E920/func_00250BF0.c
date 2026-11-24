/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern s32 D_003E9B44;

s32 func_00250BF0(PlaybackRequest *__restrict req) {
    D_003E9B44 = req->channel;
    func_0024EDC0(D_003E9B44, req->option2C);
    switch (req->command) {
    case 0:
    case 1:
        if (func_00250E70(D_003E9B44, SOUND_FIELD_PHASE) != 0)
            return -1;
        if (req->command == 0)
            func_002511D0(D_003E9B44, SOUND_FIELD_DIRTY, 1);
        else if (req->command == 1)
            func_002511D0(D_003E9B44, SOUND_FIELD_DIRTY, 2);
        func_002511D0(D_003E9B44, SOUND_FIELD_ATTACK_FRAME, 0);
        func_002511D0(D_003E9B44, SOUND_FIELD_ATTACK_DURATION, req->frames);
        func_002511D0(D_003E9B44, SOUND_FIELD_PHASE, 1);
        D_00583F80[req->channel].request = *req;
        func_002511D0(D_003E9B44, SOUND_FIELD_PENDING_START, 1);
        break;
    case 5:
        if (func_00250E70(D_003E9B44, SOUND_FIELD_PHASE) >= 4)
            return -3;
        if (!func_00250E70(D_003E9B44, SOUND_FIELD_PHASE))
            return -3;
        func_002511D0(D_003E9B44, SOUND_FIELD_RELEASE_FRAME, 0);
        func_002511D0(D_003E9B44, SOUND_FIELD_RELEASE_DURATION, req->frames);
        func_002511D0(D_003E9B44, SOUND_FIELD_PHASE, 4);
        break;
    case 4:
        if (!func_00250E70(D_003E9B44, SOUND_FIELD_PHASE))
            return -3;
        func_0024EFC0(D_003E9B44);
        {
            s32 ch = D_003E9B44;
            func_002511D0(ch, SOUND_FIELD_ATTACK_FRAME, 0);
            func_002511D0(ch, SOUND_FIELD_RELEASE_FRAME, 0);
            func_002511D0(ch, SOUND_FIELD_LEVEL, 100);
            func_002511D0(D_003E9B44, SOUND_FIELD_PHASE, 7);
        }
        break;
    case 6:
        func_0024EFC0(D_003E9B44);
        {
            s32 ch = D_003E9B44;
            func_002511D0(ch, SOUND_FIELD_ATTACK_FRAME, 0);
            func_002511D0(ch, SOUND_FIELD_RELEASE_FRAME, 0);
            func_002511D0(ch, SOUND_FIELD_LEVEL, 100);
            func_002511D0(D_003E9B44, SOUND_FIELD_PHASE, 7);
        }
        break;
    }
    return 1;
}
