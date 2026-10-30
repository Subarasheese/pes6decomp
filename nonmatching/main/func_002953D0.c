/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001CD6B0(s32, s32);                        /* extern */
extern char D_005A24B0[];

s32 func_002953D0(void) {
    return func_001CD6B0((s32) (-1000.0f * M2C_FIELD(((void *)D_005A24B0), f32 *, 4)), (s32) (1000.0f * M2C_FIELD(((void *)D_005A24B0), f32 *, 0))) & 0xFFFF;
}
