/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAE40[0x80];

u8 *func_00C17C50(u8 *dest)
{
    const u8 *src = D_00CCAE40;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCAE40));
        dest += sizeof(D_00CCAE40);
    }
    return dest;
}
