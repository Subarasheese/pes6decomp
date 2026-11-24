/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

extern void sceSifInitRpc(s32);
extern s32 sceSifBindRpc(sceSifClientData *, s32, s32);

void func_00255DC0(s32 mode) {
    if (mode == 0) {
        sceSifInitRpc(0);
        do {
            if (sceSifBindRpc(&SoundDriver_RpcClient, 0x770, 0) < 0) {
                for (;;) {
                }
            }
        } while (!SoundDriver_RpcClient.server);
        FlushCache(0);
    }
}
