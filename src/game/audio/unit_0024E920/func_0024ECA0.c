/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_adx.h"

s32 func_0024ECA0(void) {
    SoundCallback *callback = D_0053CF10;
    if (callback->notify)
        callback->notify();
    return 1;
}
