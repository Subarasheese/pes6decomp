/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
u8 *func_00C151F4(u8 *out, const u8 *in, u32 size) {
    u8 *start = out;
    while (size--) {
        *out++ = *in++;
    }
    return start;
}
