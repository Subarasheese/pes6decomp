/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAE00[0x28];

u8 *func_00C16E20(u8 *dest)
{
    const u8 *src = D_00CCAE00;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCAE00));
        dest += sizeof(D_00CCAE00);
    }
    return dest;
}
