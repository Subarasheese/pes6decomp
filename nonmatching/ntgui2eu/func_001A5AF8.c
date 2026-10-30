/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005CBB98[];

s32 func_001A5AF8(s32 *arg0, s32 *arg1) {
    if (M2C_FIELD(((void *)D_005CBB98), s32 *, 8) < 0) {
        return 0x80008001;
    }
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(((void *)D_005CBB98), s32 *, 0x10);
    }
    if (arg1 != NULL) {
        *arg1 = 0x80 - M2C_FIELD(((void *)D_005CBB98), s32 *, 0x10);
    }
    return 0;
}
