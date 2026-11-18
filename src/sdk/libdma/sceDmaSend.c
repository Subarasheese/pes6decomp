/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void DmaWaitChannelIdle(void *);
s32 DmaToPhysicalAddress(s32);                             /* extern */

void sceDmaSend(void *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = DmaToPhysicalAddress(arg1);
    DmaWaitChannelIdle(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0x30) = temp_s1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 0x105);
}
