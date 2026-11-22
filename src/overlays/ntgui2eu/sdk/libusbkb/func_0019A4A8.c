/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_00241368.c. The reference name refers to the comparison source.
 * The PAL name remains provisional. See THIRD_PARTY.md. */
#include "types.h"

void func_0019DBD0(const char *);
void func_0019AC40(volatile u32 *);  // volatile-ok: DMA channel register block (the caller's channel), polled by func_00241368 and by this callee

void func_0019A4A8(volatile u32 *channel)  // volatile-ok: DMA channel register block, polled while the channel is busy
{
    s32 remaining = 0x1000000;
    u32 busy;

    busy = *channel & 0x100;
    if (busy) {
        do {
            remaining--;
            if (remaining < 0) {
                func_0019DBD0("libdma: sync timeout\n");
                func_0019AC40(channel);
            }
            busy = *channel & 0x100;
        } while (busy);
    }
}
