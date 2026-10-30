/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK sprintf(s32, M2C_UNK *, s32);         /* extern */
extern s32 D_003EA970;
extern char D_009C5D58[];

void func_0097FF60(s32 arg0, s32 arg1) {
    if ((D_003EA970 != 0) && (arg1 < 8)) {
        sprintf(D_003EA970 + (arg1 << 8) + 0x806, ((void *)D_009C5D58), arg0);
    }
}
