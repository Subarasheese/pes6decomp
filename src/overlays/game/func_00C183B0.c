/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAF40[];

u8 *func_00C183B0(u8 *dest)
{
    const u32 size = 4;
    const u8 *src = D_00CCAF40;

    if (dest) {
        memcpy(dest, src, size);
        dest += size;
    }
    return dest;
}
