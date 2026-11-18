/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCB9A0[0x24];

u8 *func_00C54950(u8 *dest)
{
    const u8 *src = D_00CCB9A0;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCB9A0));
        dest += sizeof(D_00CCB9A0);
    }
    return dest;
}
