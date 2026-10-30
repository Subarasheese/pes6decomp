/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00111D48(s32, M2C_UNK);                  /* extern */
extern char D_003F3250[];

s32 func_00111EA0(s32 arg0, s32 arg1) {
    if (M2C_FIELD((((void *)D_003F3250) + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) == 0) {
        return 0;
    }
    return M2C_FIELD(func_00111D48(arg0, 0), s32 *, 0x58);
}
