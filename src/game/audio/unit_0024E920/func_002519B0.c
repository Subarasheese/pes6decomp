/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_driver.h"

void func_002519B0(s32 channel, u32 volume, s32 mode, s32 bank) {
    u32 packed;
    if (volume > 127)
        volume = 127;
    packed = volume | (channel << 8);
    packed |= ((mode & 255) << 16);
    packed |= (bank & 255) << 24;
    func_0024FB20(0x22000009, packed, 0, 0);
}
