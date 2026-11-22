/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_0024a908.c. See THIRD_PARTY.md. */
#include "types.h"
typedef struct Mpeg {
    char pad0[0x5A0];
    unsigned int field5A0;
    unsigned int field5A4;
    char pad5A8[0x6E0 - 0x5A8];
    unsigned int field6E0;
    unsigned int field6E4;
    char pad6E8[0x820 - 0x6E8];
    int field820;
    char pad824[0x830 - 0x824];
    unsigned int field830;
    char pad834[0x87C - 0x834];
    int bufferType;
    char buffer880[0x300];
    char bufferB80[0x300];
    char bufferE80[1];
} Mpeg;

extern char RO_STR_002AC290[];
void func_00900500(Mpeg *mpeg, char *message);

void func_008FAE48(Mpeg *mpeg)
{
    *(volatile unsigned int *)0x10002010 = (*(volatile unsigned int *)0x10002010 & 0xFF7FFFFF) | 0x800000;
    if (mpeg->bufferType == 0) {
        unsigned int scratchpad = 0x70000000;
        mpeg->field830 = scratchpad + 0x3600;
        mpeg->field5A0 = scratchpad;
        mpeg->field5A4 = scratchpad + 0x1800;
        mpeg->field6E0 = scratchpad + 0x1B00;
        mpeg->field6E4 = scratchpad + 0x3300;
        mpeg->field820 = 0;
    } else if (mpeg->bufferType == 1) {
        mpeg->field830 = (u32)mpeg->bufferE80;
        mpeg->field5A4 = ((u32)mpeg->buffer880 & 0xFFFFFFF) | 0x30000000;
        mpeg->field6E4 = ((u32)mpeg->bufferB80 & 0xFFFFFFF) | 0x30000000;
        mpeg->field5A0 = 0;
        mpeg->field6E0 = 0;
        mpeg->field820 = 0;
    } else {
        func_00900500(mpeg, "Unknown buff type.");
    }
}
