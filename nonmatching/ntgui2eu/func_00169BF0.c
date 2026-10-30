/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00169BF0(u16 *arg0, s32 arg1) {
    u16 temp_v1;

    if ((arg1 ^ 0x3FFFF) & 0x3FFFF) {
        temp_v1 = *arg0;
        if (temp_v1 == 0) {
            return 0;
        }
        return (s64) ((arg1 & (1 << (temp_v1 - 1))) << 0x20) >> 0x20;
    }
    return 1;
}
