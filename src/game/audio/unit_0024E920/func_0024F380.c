/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_adx.h"

s32 func_0024F380(s32 channel) {
    if (audioUnavailable())
        return 0;
    if (channel < SOUND_ADX_TRACKS)
        return ADXT_GetStat(D_00583330[channel]);
    return 0;
}
