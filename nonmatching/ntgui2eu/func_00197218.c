/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001971A8();                            /* extern */
extern char D_005CAA58[];

s32 func_00197218(void) {
    if (M2C_FIELD(((void *)D_005CAA58), s8 *, 0) == 0) {
        func_001971A8();
    }
    return M2C_FIELD(((void *)D_005CAA58), s8 *, 4) == 0x54;
}
