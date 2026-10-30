/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

s16 func_0018EDC0(s32 arg0) {
    if (arg0 == 0xFFFF) {
        return -1;
    }
    return M2C_FIELD(((arg0 * 0x28) + ((void *)D_011FC830)), s16 *, 0x14);
}
