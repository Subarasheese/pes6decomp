/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAF50[0x14];

u8 *func_00C186A0(u8 *dest)
{
    const u8 *src = D_00CCAF50;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCAF50));
        dest += sizeof(D_00CCAF50);
    }
    return dest;
}
