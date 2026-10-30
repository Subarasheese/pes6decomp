/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_005A3030[];

s32 func_009B4860(void) {
    return M2C_FIELD(((((s32) ((*(u16 *)D_005A3030) + 0x12B) % 300) * 0x354) + D_003E758C), s16 *, 0x348) != 0x7FFF;
}
