/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1CC0[];
extern char D_005F1CC4[];

s32 func_003385B0(void *arg0) {
    if (((*(s32 *)D_005F1CC4) > 0) && (M2C_FIELD(((void *)D_005F1CC0), s32 *, 4) < 5)) {
        M2C_FIELD(((void *)D_005F1CC0), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 4) - 1);
    } else {
        M2C_FIELD(((void *)D_005F1CC0), s32 *, 4) = 0;
        M2C_FIELD(arg0, s8 *, 0x19) = 1;
    }
    return 1;
}
