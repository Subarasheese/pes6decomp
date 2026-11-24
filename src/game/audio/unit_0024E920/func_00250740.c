/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_playback.h"
#include "pes6/sound_adx.h"

extern s32 D_003E9B4C;
extern void func_0024EF60(s32, s32);

void func_00250740(void) {
    func_00250830();
    func_0024FF10();
    for (D_003E9B4C = 0; D_003E9B4C < SOUND_PLAYBACK_CHANNELS; D_003E9B4C++) {
        if (func_00250E70(D_003E9B4C, SOUND_FIELD_DIRTY)) {
            func_002503E0(D_003E9B4C);
            func_0024EF60(D_003E9B4C, func_00250E70(D_003E9B4C, SOUND_FIELD_GAIN));
            if (func_00250E70(D_003E9B4C, SOUND_FIELD_PENDING_START)) {
                func_0024F030(D_003E9B4C, D_00583F80[D_003E9B4C].request.asset,
                              D_00583F80[D_003E9B4C].request.buffer);
                func_002511D0(D_003E9B4C, SOUND_FIELD_PENDING_START, 0);
            }
            func_002511D0(D_003E9B4C, SOUND_FIELD_DIRTY, 0);
        }
    }
}
