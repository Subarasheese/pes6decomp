/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *dest, const void *src, u32 size);
extern u8 D_00CCAF80[0x94];

u8 *func_00C219D0(u8 *dest)
{
    const u8 *src = D_00CCAF80;

    if (dest) {
        memcpy(dest, src, sizeof(D_00CCAF80));
        dest += sizeof(D_00CCAF80);
    }
    return dest;
}
