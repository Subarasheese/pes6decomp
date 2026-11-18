/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"


M2C_UNK DmaWaitChannelIdle(void *);                      /* extern */
s32 DmaToPhysicalAddress(s32);                             /* extern */

void sceDmaRecvI(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    temp_s1 = DmaToPhysicalAddress(arg1);
    DmaWaitChannelIdle(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_s1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 8) & ~1) | 0x100);
}
