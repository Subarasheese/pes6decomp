/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6File_GetChannelBusy(s32);

s32 Pes6File_AllChannelsIdle(void) {
    s32 i;

    for (i = 1; i < 5; i++) {
        if (Pes6File_GetChannelBusy(i) != 0) {
            return 0;
        }
    }
    return 1;
}
