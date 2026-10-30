/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BC238[];
extern char D_005BC640[];

s32 func_001378E8(void) {
    return M2C_FIELD((((*(s32 *)D_005BC238) * 0x14) + ((void *)D_005BC640)), s32 *, 0xC) == 0;
}
