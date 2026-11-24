/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

extern s32 D_003E9C00;

void func_00255CF0(u32 command, s32 first, s32 second, s32 third) {
    func_00251C30()(command, first, second, third, &D_003E9C00);
    if (D_003E9C00 == 1)
        return;
    D_0058C680.first = first;
    D_0058C680.command = command;
    D_0058C680.second = second;
    D_0058C680.third = third;
    sceSifCallRpc(&SoundDriver_RpcClient, command | 0x200000, 1, &D_0058C680,
                  sizeof(D_0058C680), 0, 0, 0, 0);
}
