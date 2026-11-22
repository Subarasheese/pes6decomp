/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_00241368.c. See THIRD_PARTY.md. */
#include "types.h"

void printf(const char *);
void func_00102538(volatile u32 *);  // volatile-ok: DMA channel register block (the caller's channel), polled by func_00241368 and by this callee

void DmaWaitChannelIdle(volatile u32 *channel)  // volatile-ok: DMA channel register block, polled while the channel is busy
{
    s32 remaining = 0x1000000;
    u32 busy;

    busy = *channel & 0x100;
    if (busy) {
        do {
            remaining--;
            if (remaining < 0) {
                printf("libdma: sync timeout\n");
                func_00102538(channel);
            }
            busy = *channel & 0x100;
        } while (busy);
    }
}
