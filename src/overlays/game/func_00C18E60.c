/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAF70[0x10];

u8 *func_00C18E60(u8 *dest)
{
    const u8 *src = D_00CCAF70;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCAF70));
        dest += sizeof(D_00CCAF70);
    }
    return dest;
}
