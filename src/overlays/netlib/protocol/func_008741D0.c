/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_packet_buffer.h"

extern void *memcpy(void *, const void *, unsigned int);

int func_008741D0(void *packet, const void *data, int length) {
    int value;

    if (0x400 - length < *(int *)((int)packet + 0x454)) {
        value = -0x1f5;
    } else {
        memcpy((void *)((int)packet + *(int *)((int)packet + 0x454) + 0x40), data, length);
        value = 0;
        *(int *)((int)packet + 0x454) = *(int *)((int)packet + 0x454) + length;
    }
    return value;
}
