/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CBDED0[0x1BC4];

u8 *func_00C11E50(u8 *dest)
{
    const u8 *src = D_00CBDED0;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CBDED0));
        dest += sizeof(D_00CBDED0);
    }
    return dest;
}
