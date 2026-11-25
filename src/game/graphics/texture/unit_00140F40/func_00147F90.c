/* compiler: mwcc-3.0.1b210 */
#include "pes6/slot_channels.h"

void func_00147F90(s32 slot, u8 first, u8 second) {
    SlotChannels options = {0};
    options.channel[0] = first;
    options.channel[1] = second;
    func_00148690(slot, &options);
}
