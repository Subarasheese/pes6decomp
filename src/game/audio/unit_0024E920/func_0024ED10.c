/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_adx.h"

s32 func_0024ED10(void) {
    SoundCallback *callback = D_0053CF10;
    if (callback->poll)
        return callback->poll();
    return 0;
}
