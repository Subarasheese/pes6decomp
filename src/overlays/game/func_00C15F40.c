/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAD70[];

u8 *func_00C15F40(u8 *dest)
{
    const u32 size = 4;
    const u8 *src = D_00CCAD70;

    if (dest) {
        memcpy(dest, src, size);
        dest += size;
    }
    return dest;
}
