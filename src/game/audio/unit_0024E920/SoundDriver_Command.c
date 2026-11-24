/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

extern s32 D_003E9B40;

s32 SoundDriver_Command(u32 command, s32 first, s32 second, s32 third) {
    s32 category = (command >> 29) & 7;
    D_003E9B40 = 0;
    switch (category) {
    case 1:
        while (SoundDriver_IsBusy()) {
        }
        D_003E9B40 = func_00255C10(command, first, second, third);
        break;
    case 0:
        while (SoundDriver_IsBusy()) {
        }
        func_00255CF0(command, first, second, third);
        break;
    case 2:
    case 3:
    case 4:
        func_0024F5B0(command, first, second, third);
        break;
    }
    return D_003E9B40;
}
