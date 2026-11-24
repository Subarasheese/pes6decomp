/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_driver.h"

extern s32 sceSifCheckStatRpc(sceSifClientData *client);

s32 SoundDriver_IsBusy(void) {
    return sceSifCheckStatRpc(&SoundDriver_RpcClient);
}
