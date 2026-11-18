/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK sceSifCheckStatRpc(M2C_UNK *);                   /* extern */
extern char SoundDriver_RpcClient[];

void SoundDriver_IsBusy(void) {
    sceSifCheckStatRpc(((void *)SoundDriver_RpcClient));
}
