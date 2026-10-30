/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0011B9C0(u32 arg0) {
    if (arg0 > 0x10FFFFU) {
        return 0;
    }
    return (u32) (arg0 + 0xFFFF2800) > 0x7FFU;
}
