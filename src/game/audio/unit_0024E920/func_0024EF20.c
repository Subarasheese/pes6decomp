/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_adx.h"

void func_0024EF20(s32 channel, s32 value) {
    if (audioUnavailable())
        return;
    ADXT_Pause(D_00583330[channel], value);
}
