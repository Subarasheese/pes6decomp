/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

extern s32 D_003E9C04;
extern s32 D_0058C640[4];

s32 func_00255C10(u32 command, s32 first, s32 second, s32 third) {
    func_00251C30()(command, first, second, third, &D_003E9C04);
    if (D_003E9C04 == 1)
        return 0;
    D_0058C680.command = command;
    D_0058C680.first = first;
    D_0058C680.second = second;
    D_0058C680.third = third;
    sceSifCallRpc(&SoundDriver_RpcClient, command | 0x200000, 0, &D_0058C680, sizeof(D_0058C680),
                  D_0058C640, sizeof(D_0058C640), 0, 0);
    return D_0058C640[0];
}
